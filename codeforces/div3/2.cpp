#include <iostream>
#include <algorithm>
#include <vector>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        while (v.back() == 0)
            v.pop_back();
        reverse(v.begin(), v.end());
        while (v.back() == 0)
            v.pop_back();
        int cnt = 0;
        for (auto s : v)
        {
            if (s == 0)
                cnt++;
        }
        cout << cnt << endl;
    }
}