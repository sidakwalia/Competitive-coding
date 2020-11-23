#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
void solve(){
int n;
        cin >> n;
        vector<vector<int>> ans(n);
        for (int i = 0; i < n; i++)
            ans[i].resize(n, 0);

        if (n == 4)
        {
            cout << "4 6 8 1\n4 9 9 9 \n4 10 10 65\n1 4 4 4\n";
            return;
        }
        for (int i = 0; i < n; i++)
        {
            ans[i][i] = 1;
            ans[i][n - i - 1] = 1;
        }
        if (n % 2==1)
        {
            ans[n / 2 - 1][n / 2] = 1;
            ans[n / 2][n / 2 + 1] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << ans[i][j];
                if (j < n - 1)
                    cout << " ";
                else
                    cout << endl;
            }
        }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}