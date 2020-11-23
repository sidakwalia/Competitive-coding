
#include <bits/stdc++.h>
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
        int i = sqrt(n);
        bool fac = false;
        bool nofac = false;
        int cnt = 0;
        while (n != 1 && i>0)
        {
            fac = false;
            nofac = false;

            if (i == n)
                break;
            if (n % i == 0)
            {
                cnt++;
                fac = true;
            
            }
            else if (n % i != 0)
            {
                cnt++;
                nofac = true;
            }

            if (fac == true){
                n = n / i;
                i--;
            }
            else
                n--;
            
        }

        cout << cnt << endl;
    }
}