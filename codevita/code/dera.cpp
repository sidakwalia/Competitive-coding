#include <iostream>
#include <vector>
#include <unordered_map>
#include <iomanip> 
#define lli long long 
using namespace std;

void permute(lli n) 
{ 
    double x, flo = 0.0; 
    for (x = 1; x <= n; x++){ 
    flo = flo + 1/x; 
    }
    cout<<fixed;
    cout<<setprecision(6);
    cout<<flo;
} 


int main(){
    lli n;
  cin>>n;
  vector<int>myans(n,0);
  for(int itr=0;itr<n;itr++)
  cin>>myans[itr];

  permute(n);
}