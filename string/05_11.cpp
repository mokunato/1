#include<bits/stdc++.h>
using namespace std;
int main(){
    string x,y;
    int i,a,c;
    char b;
    while(getline(cin,x)){
        c=1,a=0;
        for(i=0;i<x.size();i++){
            if(!isalpha(x[i])&&x[i]!=' '&&x[i]!='-'&&a==0){
                b=x[i];
                a=1;
            }
            if(x[i]==b&&a==1) {
                c*=-1;
            }
            if(c==-1&&x[i]!=b){
                cout<<x[i];
            }
        }
        cout<<endl;
    }   
}