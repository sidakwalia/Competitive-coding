#include <bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int maxi = 0;

    maxi = *max_element(v.begin(), v.end());

    int ok = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[0])
        {
            ok = 0;
            break;
        }
    }
    if (ok == 1)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == maxi)
        {
            if (i - 1 >= 0 && v[i - 1] < v[i])
            {
                cout << i + 1 << endl;
                return;
            }
            if (i + 1 < n && v[i + 1] < v[i])
            {
                cout << i + 1 << endl;
                return;
            }
        }
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}