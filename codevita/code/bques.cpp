#include<iostream>
#include<vector>
#include<map>
#define ull       unsigned long long int
#define ll        long long int
#define loop(i,s,e)     for(ll i=(s);i<(e);i++)
#define rloop(i,s,e)    for(ll i=(s);i>=(e);i--)
#define scan(any)       for(auto &i:any) cin>>i;
#define print(any)      for(auto i:any) cout<<i<<" "; nl;
#define nl              cout<<'\n'
 #define pi 3.141592654
#define hell 1000000007
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fix(n) cout << fixed << setprecision(n)

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define vi vector<int>
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define all(v) (v).begin(), (v).end()
using namespace std;

#define int long long int
#define endl '\n'

int value_lekr_aa(int var1)
{
    for (int i = 2; i * i <= var1; i++)
    {
        if (var1 % i == 0)
            return var1 / i;
    }
    return 1;
}

void sol()
{
    int var1, var2;
    cin >> var1 >> var2;
    if (var1 < var2)
        swap(var1, var2);
    if (var1 == var2)
    {
        cout << 0;
        return;
    }
    map<int, int> hashmap;

    int var3 = 0;
    while (var1 != 1)
    {
        var3++;
        var1 = value_lekr_aa(var1);
        hashmap[var1] = var3;
    }

    var3 = 0;
    while (!hashmap.count(var2))
    {
        var3++;
        var2 = value_lekr_aa(var2);
    }
    cout << var3 + hashmap[var2];
}
void getanswer(){
    sol();
}

void ans(){
    getanswer();
}

void myans(){
    ans();
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    myans();
    return 0;
}
