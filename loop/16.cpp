#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j,k=n;
    for(i=0;i<n-1;i++){
        for(j=0;j<i+n;j++){
            if(j==n+i-1||j==k-1) cout<<'*';
            else cout<<'.';
        }
        cout<<endl;
        k--;
    }
    for(i=0;i<2*n-1;i++) cout<<'*';
}