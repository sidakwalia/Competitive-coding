#include<iostream>
#include<vector>
#include<math.h>
#include<unordered_set>
using namespace std;


vector<int> maxPrimeFactors(long long n,vector<int> &ans) 
{   
   
    long long maxPrime = -1; 
   
  
    while (n % 2 == 0) { 
        maxPrime = 2; 
        n >>= 1; 
        ans.push_back(n);
    } 
  
   
    for (int i = 3; i <= sqrt(n); i += 2) { 
        while (n % i == 0 ) { 
            maxPrime = i; 
            n = n / i; 
            ans.push_back(n);
        } 
    } 
  
    
    if (n > 2) {
        maxPrime = n; 
 ans.push_back(n); 
}
    return ans; 
}

void solve(long long  a,long long b)
{
vector<int>ans1;
vector<int>ans2;
maxPrimeFactors(a,ans1);
maxPrimeFactors(b,ans2);
// for(int x:ans1)
// cout<<x<<" ";
// cout<<endl;
// for(int y:ans2)
// cout<<y<<" ";
std::move(ans2.begin(), ans2.end(), std::back_inserter(ans1));
for(int x: ans1)
cout<<x<<" ";


unordered_set<int>s;

// for(int x:ans1)
// {
//     s.insert(x);
// }

// return s.size();

}


int main()
{
long long a,b;

// cin>>a>>b;
a=18;
b=19;
   solve(a,b);



}