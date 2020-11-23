#include <iostream>
#include <vector>
#include <unordered_map>
#include<set>
#define long long int
using namespace std;
void permute(string a, int l, int r,vector<string> &meeans)  
{  
 
    if (l == r)  
       meeans.push_back(a); 
    else
    {  
          
        for (int i = l; i <= r; i++)  
        {  
    
            swap(a[l], a[i]);  
  
            permute(a, l+1, r,meeans);  

            swap(a[l], a[i]);  
        }  
    }  
}  

int main()
{
    string s;
    int n;
     cin >> s;
    cin>>n;
    vector<string> ans(n);
    for (int i = 0; i < n; i++)
        cin >> ans[i];

        
   
   unordered_map<string,int>map;
vector<string>meeans;
    for(int i=0;i<ans.size();i++){
        permute(ans[i],0,ans[i].size()-1,meeans);
    }

    for(string x:meeans)
   map[x]++;

  int id=1;
  int str=0;

  while(id<s.length())
   {
       if(map.count(s.substr(str,id))==1){
           str=str+id;
           
       }
       else{
           id++;
       }
   }

if(id==s.length())
cout<<"YES"<<endl;
else{
    cout<<"NO"<<endl;
}
  


}