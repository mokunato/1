#include<bits/stdc++.h>
using namespace std;
int check(char x){
    if(x<41||x>122){
        cout<<x+0<<endl;
        return 0;
    }else return 1;
}
int main(){
    string x;
    getline(cin,x);
    int i,j,C=1;
    for(i=0;i<x.length();i++){
        if(check(x[i])==0){
            C*=-1;
            cout<<C<<endl;
        }
        if(C==-1){
            while(check(x[i+1])==1){
                cout<<x[i+1];
                i++;
            }
            i--;
        }
        cout<<i<<" "<<C<<" "<<x[i]<<endl;
    }  
}