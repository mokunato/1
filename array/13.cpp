#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    double y[n];
    for(int i=0;i<n;i++){
        cin>>y[i];
    }
    for(int i=1;i<n-1;i++){
        if(y[i-1]<y[i]&&y[i]>y[i+1]){
            c++;
        }
    }
    cout<<c;
}