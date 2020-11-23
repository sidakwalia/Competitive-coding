#include <iostream> 
using namespace std; 
  
void solve(string s)
{
    int n = s.length();
    if (n == 0)
        return;
    int i = 1;
    int j ;
    string a = "";
    string b = "";
    string c = "";
    while (i < n - 2)
    {
       a=s.substr(0,i);
       b=s.substr(i,j-1);
       c=s.substr(j,n-j);
    }
    cout<<a<<b<<c;
   
}
  
// Driver code 
int main() 
{ 
    string str = "aaaaa"; 
   solve(str);
  
    return 0; 
} 