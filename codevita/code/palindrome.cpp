#include <iostream>
#include <vector>
#include <math.h>
#include <string.h>
#include <unordered_set>
using namespace std;
bool ispal(string str)
{
    int n = str.length();

    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
            return false;
    }
    return true;
}
void solve(string &s)
{
    int n = s.length();
  
    int i = 1;
    int j ;
    string str1 = " ";
    string str2 = " ";
    string str3 = " ";
    while (i < n - 2)
    {
        if (ispal(s.substr(0, i))==true)
        {
            str1 = str1 + s.substr(0, i);
            j = i + 1;
            while (j < n)
            {
                if (  ispal(s.substr(i, j - 1)) && ispal(s.substr(j, n-j)) )
                {
                    str2 = str2 + s.substr(i, j - 1);
                    str3 = str3 + s.substr(j, n-j);
                }
                else
                {
                    j++;
                }
            }
        }
        else
        {
            i++;
        }
    }
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    
}

int main()
{
    string s = "aaaaa";

    solve(s);
}