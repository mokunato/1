#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x==0)cout<<"zero"<<endl<<"even";
    else if(x>0){
        if(x%2==0){
            cout<<"positive"<<endl<<"even";
        }else cout<<"positive"<<endl<<"odd";
    }
    else if(x%2==0){
        cout<<"negative"<<endl<<"even";
    }
    else cout<<"negative"<<endl<<"odd";
}