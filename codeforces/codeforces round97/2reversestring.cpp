#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool count(string s)
{
    int n = s.length();
    int zero = 0, one = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1] && s[i] == '1')
        {

            one++;
        }
        else if (s[i] == s[i - 1] && s[i] == '0')
        {
            zero++;
        }
    }
    cout << max(zero, one) << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        count(s);
    }

    return 0;
}