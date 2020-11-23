#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <math.h>
#define PI 3.14159265
#define long long int
using namespace std;

int main()
{
    int R, D1, D2, D3;
    cin >> R >> D1 >> D2 >> D3;
    int th1, th2, th3, th4;
    cin >> th1 >> th2 >> th3 >> th4;

    int v1, v2, v3, v4;
    cin >> v1 >> v2 >> v3 >> v4;

    int d1, d2, d3, d4;
    cin >> d1 >> d2 >> d3 >> d4;

    int T;
    cin >> T;

    int fin_a1, fin_a2, fin_a3, fin_a4;

    if (d1 == 0)
    {

        fin_a1 = (th1 - v1 * T) % 360;
    }
    else
    {
        fin_a1 = (th1 + v1 * T) % 360;
    }

    if (d2 == 0)
    {

        fin_a2 = (th2 - v2 * T) % 360;
    }
    else
    {
        fin_a2 = (th2 + v2 * T) % 360;
    }

    if (d3 == 0)
    {

        fin_a3 = (th3 - v3 * T) % 360;
    }
    else
    {
        fin_a3 = (th3 + v3 * T) % 360;
    }
    if (d4 == 0)
    {

        fin_a4 = (th4 - v4 * T) % 360;
    }
    else
    {
        fin_a4 = (th4 + v4 * T) % 360;
    }

    double x1, y1, x2, y2, x3, y3, x4, y4;
    x1 = R * cos(fin_a1 * (PI / 180.0));
    y1 = R * sin(fin_a1 * (PI / 180.0));

    x2 = D1 + R * cos(fin_a2 * (PI / 180.0));
    y2 = R * sin(fin_a2 * (PI / 180.0));

    x3 = D2 + R * cos(fin_a3 * (PI / 180.0));
    y3 = R * sin(fin_a3 * (PI / 180.0));
    x4 = D3 + R * cos(fin_a4 * (PI / 180.0));
    y4 = R * sin(fin_a4 * (PI / 180.0));

    double ans = 0;

    ans = sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2)) + sqrt(pow(y3 - y2, 2) + pow(x3 - x2, 2)) + sqrt(pow(y4 - y3, 2) + pow(x4 - x3, 2));

    cout << round(ans);
}