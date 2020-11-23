#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int districts;
    cin >> districts;
    char start, end;
    cin >> start >> end;
    if (start > end)
        swap(start, end);
    int digStart, digEnd;
    cin >> digStart >> digEnd;
    if (digStart > digEnd)
        swap(digStart, digEnd);
    int ans = districts;
    int numberOfChars = end - start + 1;
    int numberOfDigits = digEnd - digStart + 1;
    ans = ans * numberOfChars * numberOfChars * numberOfDigits * numberOfDigits * numberOfDigits * numberOfDigits;
    cout << ans ;
    return 0;
}