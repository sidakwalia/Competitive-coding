#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
#define mini -1e8
#define ll long long
#define M 1000000007

int n, m, k, arr[71][71], dp[71][71][71][36];

int solve(int i, int j, int mod, int remai)
{
    if (i == n - 1 && (j == m || !remai))
        return (mod == 0 ? 0 : mini);

    if (j == m || remai == 0)
        return dp[i][j][mod][remai] = solve(i + 1, 0, mod, m / 2);
    if (dp[i][j][mod][remai] != -1)
        return dp[i][j][mod][remai];

    int ans = mini, MOD = arr[i][j] % k;

    if (MOD > mod)
        ans = max(ans, arr[i][j] + solve(i, j + 1, k - (MOD - mod), remai - 1));
    else if (MOD < mod)
        ans = max(ans, arr[i][j] + solve(i, j + 1, mod - MOD, remai - 1));
    else
        ans = max(ans, arr[i][j] + solve(i, j + 1, 0, remai - 1));

    ans = max(ans, solve(i, j + 1, mod, remai));
    return dp[i][j][mod][remai] = ans;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("insert.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    memset(dp, -1, sizeof(dp));

    cout << max(0, solve(0, 0, 0, m / 2)) << endl;

    return 0;
}
