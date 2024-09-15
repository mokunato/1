#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> x;
    int i,c=-1,a;
    for(i=0;i<n;i++){
        cin>>a;
        if(c==1){
            x.insert(x.begin(),a);
            c*=-1;
        }else {
            x.insert(x.end(),a);
            c*=-1;
        }
    }
    while(true){
        cin>>a;
        if(a==-1) break;
        if(c==1){
            x.insert(x.begin(),a);
            c*=-1;
        }else {
            x.insert(x.end(),a);
            c*=-1;
        }
    }
    cout<<"[";
    for(i=0;i<x.size()-1;i++){
        cout<<x[i]<<", ";
    }
    cout<<x[x.size()-1]<<"]";
}