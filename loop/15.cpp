#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    getline(cin,x);
    for(int i=0;i<x.size();i++){
        if(x[i]=='(') x[i]='[';
        else if(x[i]=='[') x[i]='(';
        else if(x[i]==')') x[i]=']';
        else if(x[i]==']') x[i]=')';
        cout<<x[i];
    }
}