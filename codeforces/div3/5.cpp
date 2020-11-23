#include <bits/stdc++.h>
#define MOD 1000000007
#define lli long long
using namespace std;

vector<lli> dp(21, 0);

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("insert.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin >> n;

    dp[0] = 1;
    for (int i = 1; i <= n; i++)
        dp[i] = i * dp[i - 1];

    lli ans = dp[n] / dp[n / 2] / dp[n / 2];
    ans = ans * dp[n / 2 - 1];
    ans = ans * dp[n / 2 - 1];
    ans = ans / 2;
    cout << ans << " ";

    return 0;
}
