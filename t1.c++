#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,s=0,l;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=1;i<n;i++){
        if(x[i-1]>x[i]){
            for(int j=i+1;j<n;j++){
                if(x[j]>=x[i-1]){
                    break;
                }
                s+=x[i]-x[j];
                l=j;
            }
        }
        i=l;
    }
    cout<<s;
    return 0;
}