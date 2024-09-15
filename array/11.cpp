#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    getline(cin,x);
    string y="0123456789";
    int c=0,k=0;
    for(int i=0;i<x.size();i++){
        if(x[i]=='0'||x[i]=='1'||x[i]=='2'||x[i]=='3'||x[i]=='4'||x[i]=='5'||x[i]=='6'||x[i]=='7'||x[i]=='8'||x[i]=='9'){
            y[x[i]-48]=' ';
        }
    }
    for(int i=0;i<10;i++){
        if(y[i]==' '){
            c++;
        }
    }
    if(c==10){
        cout<<"None";
    }
    else for(int i=0;i<10;i++){
            if(k==9-c&&y[i]!=' ') cout<<y[i];
            else if(y[i]!=' '){
                cout<<y[i]<<',';
                k++;
            }
            
    }
}