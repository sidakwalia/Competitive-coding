#include <iostream>
#define int long long
using namespace std;
int cnt = 0;
string s;
int n;

void solve(int si, int end, int x)
{
    if (si == 0)
        return;
}

void myans()
{
    cin >> s;
    int len = s.length();
    int small = (s[0] - '0');
    int sum = 10;
    int ans = sum * (small - 1);
    int ans2 = len * (len + 1) / 2;
    ans += ans2;
    cout << ans << endl;
}

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        myans();
    }
    return 0;
}