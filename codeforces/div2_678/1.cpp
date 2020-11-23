#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

void solve(vector<int> &ans, int m)
{

    int n = ans.size();
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        sum+=ans[i];
        
    }
  

    if (sum == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> ans(n + 1);
        ans.push_back(0);
        for (int i = 1; i < n + 1; i++)
            cin >> ans[i];
        solve(ans, m);
    }
}