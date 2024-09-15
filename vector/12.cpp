#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    vector <int> x;
    while(n!=1){
        x.insert(x.begin(),n);
        if(n%2==0) n/=2;
        else n=3*n+1;      
    }
    if(x.size()>15)
    for(i=13;i>=0;i--){
        cout<<x[i]<<"->";
    }
    else for(i=x.size()-1;i>=0;i--){
        cout<<x[i]<<"->";
    }
    cout<<"1";
}