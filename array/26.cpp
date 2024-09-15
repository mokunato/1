#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,k,c=0,y;
    cin>>n;
    int x[n*n];
    for(i=0;i<n*n;i++){
        cin>>y;
        if(y!=0) x[i]=y;
        else k=i;
    }
    for(i=0;i<n*n;i++){
        for(j=i+1;j<n*n;j++){
            if(x[i]>x[j]) c++;
        }
    }
    if(n%2==0){
        if(c%2==0&&(k/n+1)%2!=0) cout<<"YES";
        else if(c%2!=0&&(k/n+1)%2==0) cout<<"YES";
        else cout<<"NO";
    }else if(c%2==0) cout<<"YES";
    else cout<<"NO";
}