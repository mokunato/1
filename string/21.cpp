#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    int i,c=1;
    for(i=0;i<x.size()-1;i++){
        cout<<x[i];
        if(isupper(x[i+1])) cout<<", ";
        else if(isdigit(x[i+1])&&!isdigit(x[i])) cout<<", ";
        else if(isdigit(x[i])&&!isdigit(x[i+1])) cout<<", ";
    }
    cout<<x[i];
}