#include <iostream>
#include <vector>
#include <unordered_map>
#include <iomanip> 
#define lli long long 
using namespace std;


void permutationtotal(lli n) 
{ 
    double itr, floatp = 0.0; 
    for (itr = 1; itr <= n; itr++){ 
    floatp = floatp + 1/itr; 
    }
    cout<<fixed;
    cout<<setprecision(6);
    cout<<floatp;
} 

void solve()
{
lli n;
  cin>>n;
  vector<int>myans(n,0);
  for(int itr=0;itr<n;itr++)
  cin>>myans[itr];

  permutationtotal(n); 
}
void answer(){

    solve();
    
}
int main() 
{ 
    answer();
    return 0; 
} 