#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    int i,j,k=0,l,a,b;
    cin>>x;
    int c[1000];
    vector <char> y;
    for(i=0;i<x.size();i++){
            y.push_back(x[i]);
            for(j=i;x[i]==x[j];j++){
                c[k]++;
            }
            i=j-1;
            k++;
    }
    l=0;
    for(auto i:y){
        cout<<i<<" ";
        cout<<c[l]<<" ";
        l++;
    }
}