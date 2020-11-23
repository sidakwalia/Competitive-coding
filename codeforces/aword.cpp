#include <iostream>
#include <string>
using namespace std;

string upp(string &s)
{
    int n = s.length();
    string x="";
    for (int i = 0; i < n; i++)
    {
        x += toupper(s[i]);
    }
    return x;
}
string down(string &s)
{
    int n = s.length();
    string x="";
    for (int i = 0; i < n; i++)
    {
        x += tolower(s[i]);
    }
    return x;
}

int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (isupper(s[i]))
        {
            cnt++;
        }
    }
    if (cnt > n - cnt)
    {
        cout << upp(s);
    }
    else if (cnt < n - cnt)
    {
        cout << down(s);
    }
    else
    {
        cout << down(s);
    }
}