#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if (l * 2 > r)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
}