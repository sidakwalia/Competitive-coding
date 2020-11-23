#include<iostream>
#include<algorithm>
using namespace std;

int  main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t,a,b,c,d;

cin>>t;

for(int i=1;i<=t;i++){
    cin>>a>>b>>c>>d;
    
if(max(a,b)==max(c,d) && (min(a,b)+min(c,d)==max(a,b))){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
    
    
    
return 0;
    
}
    
    
    