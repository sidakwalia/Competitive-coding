#include <iostream>
#include<algorithm>
#include <vector>
#include <math.h>
#include <string.h>
#include <unordered_set>
using namespace std;

bool pala(string& s,vector<long>& v11,vector<long>& v12,int first,int end,vector<long>& answertab){
     
        if(end<first)return false;
     
        int n=s.length();
        
        long v0=v11[end]-(first==0?0:v11[first-1]);
        v0*=answertab[n-first];
        
        int tmp=first;
        first=n-1-end;
        end=n-1-tmp;
        long v1=v12[end]-(first==0?0:v12[first-1]);
        v1*=answertab[n-first];
        
        return (v0==v1);
    }
      void indexlekraa(string& s,vector<int>& pos,vector<long>& hashfValues){
     
        int n=s.length();
        
        vector<long>v11(n),v12(n);        
        long hashf0=0,hashf1=0,mult=1;
        for(int i=0;i<n;i++){
            hashf0=997*hashf0+s[i];
            hashf1+=mult*s[i];
            mult*=997;
            v11[i]=hashf0;
            v12[i]=hashf1;
            hashfValues[i]=hashf1;
        }
        
        for(int i=0;i<n;i++)
            if(v11[i]==v12[i])pos.push_back(i);        
    }
    
    void threePalindromes(string s){
        
        int n=s.length();
        if(n<3){cout<<"Impossible"<<endl;return;}
        
        vector<int>first,end;
        vector<long>v11(n),v12(n),answertab(n+1);
        
        indexlekraa(s,first,v11);
        reverse(s.begin(),s.end());
        indexlekraa(s,end,v12);
        
        reverse(end.begin(),end.end());
        reverse(s.begin(),s.end());
        
        answertab[0]=1;
        for(int i=1;i<=n;i++)answertab[i]=997*answertab[i-1];
        for(int i:first)
            for(int x:end){
                int j=n-x-1;
                if(j<=i+1)continue;
                
                if(pala(s,v11,v12,i+1,j-1,answertab)){
                   cout<<s.substr(0,i+1)<<" "<<s.substr(i+1,j-i-1)<<" "<<s.substr(j,n-j)<<endl;
                   return;
                }
            }
       cout<<"Impossible"<<endl;
    }
void solve(string str){
    threePalindromes(str);
}
void ans(string str){
    solve(str);
}
 


int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   string str;
   cin>>str;

  ans(str);
 
    
    return 0;
}