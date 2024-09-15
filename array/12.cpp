#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    string x;
    string y[10]={"Robert","William","James","John","Margaret","Edward","Sarah","Andrew","Anthony","Deborah"};
    string z[10]={"Dick","Bill","Jim","Jack","Peggy","Ed","Sally","Andy","Tony","Debbie"};
    for(i=0;i<n;i++){
        int c=0;
        cin>>x;
        for(j=0;j<10;j++){
            if(x==y[j]){
                cout<<z[j]<<endl;
                c=1;
            }
        }
        for(j=0;j<10;j++){
            if(x==z[j]){
                cout<<y[j]<<endl;
                c=1;
            }
        }
        if(c==0) cout<<"Not found"<<endl;
    }
}