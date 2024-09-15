#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,s=0,l=0,k=0;
    cin>>n;
    int x[n],b;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=1;i<n;i++){
        if(x[i-1]>x[i]){
            for(int j=i+1;j<n;j++){
                l=j;
                if(x[j]>=x[i-1]||(x[j]>x[j+1]&x[j-1]<x[j])){
                    break;
                }
            }
            cout<<l<<" ";
            if(x[l]>x[i-1]){
                k=x[i-1];
            }else k=x[l];
            cout<<"k="<<k<<endl;
            for(int j=i;j<l;j++){
                s+=k-x[j];   
              //  cout<<x[j]<<" "  ;    
            }
        }
        i=l;
    }
    cout<<s;
}