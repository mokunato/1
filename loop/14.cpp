#include<bits/stdc++.h>
using namespace std;
int main(){
    string x,y;
    int c=0;
    getline(cin,x);
    getline(cin,y);
    if(x.size()!=y.size()){
        cout<<"Incomplete answer";
        return 0;
    }
    for(int i=0;i<x.size();i++){
        if(x[i]==y[i]) c++;
    }
    cout<<c;
}