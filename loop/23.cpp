#include<bits/stdc++.h>
using namespace std;
int main(){
    string t;
    int k;
    cin>>t>>k;
    int i,j,l;
    for(i=0;i<t.size();i++){
        l=1;
        for(j=i+1;t[j]==t[i];j++){
            l++;
        }
        if(l<k){
            for(j=i;j<i+l;j++){
                cout<<t[j];
            }
        }
        i=j-1;
    }
}