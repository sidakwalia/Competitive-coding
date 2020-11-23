#include <bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
void solve(){
     int n;
        cin >> n;
        set<int> s;
        map<int, vector<int>> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
            a[x].push_back(i);
        }
        if (s.size() == 1)
        {
            cout << "NO" << endl;
            return;
        }
        cout<<"YES"<<endl;
        vector<vector<int>> ans;
        for (auto x : a)
            ans.push_back(x.second);

        for (int i = 1; i < ans.size(); i++)
        {
            for (auto j : ans[i])
            {
                cout << ans[0][0] + 1 << " " << j + 1 << endl;
            }
        }

        for (int i = 1; i < ans[0].size(); i++)
        {
            cout << ans[0][i] + 1 << " " << ans[1][0] + 1 << endl;
        }
        return;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("insert.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
    {
       solve();
    }
    return 0;
}
