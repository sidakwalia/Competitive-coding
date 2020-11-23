#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++)
            cin >> ans[i];
        long long int cnt_zero = 0;
        vector<int> store;
        for (int i = 0; i < n; i++)
        {
            if (ans[i] == 0)
                cnt_zero++;
            else
            {
                if (cnt_zero > 0)
                {
                    store.push_back(cnt_zero);
                    cnt_zero = 0;
                }
            }
        }
        sort(store.begin(), store.end(), greater<int>());
        int m = store.size();
        if (m == 0)
        {
            cout << "NO" << endl;
        }
        if (m == 1)
        {
            if (store[0] & 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        if (m >= 2)
        {
            if (store[0] % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                int mid = (store[0] + 1) / 2;
                if (mid <= store[1])
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
    }
}