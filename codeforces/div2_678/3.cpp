#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define int long long
#define Mod 1000000009
#include <algorithm>
using namespace std;

int32_t main()
{
    int n, no_to_search, pos;
    cin >> n >> no_to_search >> pos;

    int gre = n - no_to_search;
    int less = no_to_search - 1;
    int start = 0;
    int end = n ;
    int ans = 1;
    while (start < end)
    {
        int mid = (start + end) >> 1;

        if (mid < pos)
        {
            ans = ans * less % Mod;
            less--;
            start = mid + 1;
        }
        else if (mid == pos)
        {
            ans = ans;
            start = mid + 1;
        }
        else
        {
            ans = ans * gre % Mod;
            gre--;
            end = mid;
        }
    }
    less += gre;
    while (less > 0)
    {
        ans = ans * less % Mod;
        less--;
    }
    cout << ans << endl;
}