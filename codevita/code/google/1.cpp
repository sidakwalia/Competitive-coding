#include <iostream>
#include <vector>
#include <unordered_map>
#include<set>
#define long long int
using namespace std;

void fun(int n,int k,vector<int> &ans)
{
    int small;
    int large;

    for(int i=0;i<ans.size();i++)
{
    if(ans[i]>k){
        large++;
    }
    else{small++;}
}
int id=0;
int small2;
int large2;
if(small!=large){
    for(id=0;id<n;id++){
            if(ans.erase(0,id))
    }
}



}




int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>ans(n);
    
    for(int i=0;i<n;i++)
    cin>>ans[i];

    fun(n,k,ans);

    }

}