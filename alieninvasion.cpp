#include <iostream>
#include <algorithm>
#include<iomanip>
#include <vector>
#define ll long long int
using namespace std;
int n, d;
vector<int> c;

bool work(long double mid)
{
    long double time_my = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (time_my < c[i])
            time_my = c[i] + mid;
        else if (time_my <= c[i] + d)
            time_my += mid;
        else
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        cin >> n >> d;
        c.clear();
        c=vector<int>(n);
        for (int i = 0; i < n; i++)
            cin >> c[i];
        sort(c.begin(), c.end());
        long double low = 0.0, high = 1e10, mid;

        while ((high - low) > 0.0000001)
        {
            mid = (low + high) / 2;
            if (work(mid))
                low = mid;
            else
                high = mid;
        }
        cout << fixed << setprecision(7) << low << endl;
    }
}