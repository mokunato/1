#include<bits/stdc++.h>
using namespace std;
int main(){
    float x;
    cin>>x;
    if(x>=80){
        cout<<"A";
    }else if(x>=70){
        cout<<"B";
    }else if(x>=60){
        cout<<"C";
    }else if(x>=50){
        cout<<"D";
    }else {
        cout<<"F";
    }
}