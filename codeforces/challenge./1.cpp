#include <iostream>
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
        vector<int> a(n, 0);
        vector<int> b(n, 0);
        vector<int> c(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        int temp = 0;
        vector<int> myans;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i] && a[i] != b[i] && b[i] != c[i] && i == 0)
            {
                int x = a[i];
                int y = b[i];
                int z = c[i];
                temp = x;
                myans.push_back(x);
            }
            else if (a[i] != b[i] && a[i] != b[i] && b[i] != c[i])
            {
                int x = a[i];
                int y = b[i];
                int z = c[i];
                if (temp != x)
                {
                    myans.push_back(x);
                    temp = x;
                }
                else if (temp != y)
                {
                    myans.push_back(y);
                    temp = y;
                }
                else
                {
                    myans.push_back(z);
                    temp = z;
                }
            }
        }
        for (int i = 0; i < myans.size(); i++)
        {
            cout << myans[i] << " ";
        }
        cout<<endl;
    }
}