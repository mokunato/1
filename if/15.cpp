#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    if(x.size()!=10){
        cout<<"Not a mobile number";
    }else if(x[0]!='0'){
        cout<<"Not a mobile number";
    }else if(x[1]!='6'&&x[1]!='9'&&x[1]!='8'){
        cout<<"Not a mobile number";
    }else cout<<"Mobile number";
}