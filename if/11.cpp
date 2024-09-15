#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    if(x=="01"||x=="02"||x=="51"||x=="53"||x=="55"||x=="58"){
        cout<<"OK";
        return 0;
    }
    for(int i=20;i<41;i++){
        if(x[0]-48==i/10&&x[1]-48==i%10){
            cout<<"OK";
            
            return 0;
        }
    }
    cout<<"Error";
}