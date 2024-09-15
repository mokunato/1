#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k=0,l=0;
    int i=2;
    cin>>n;
    vector <int> c;
    while(n!=1){
        while(n%i==0){
            n/=i;
            c.push_back(i);
            k++;
        }
        i++;
    }
    for(auto i:c){
        if(k!=l+1)cout<<i<<"*";
        else cout<<i;
        l++;
    }
}