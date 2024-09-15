#include<bits/stdc++.h>
using namespace std;
int main(){
    float x;
    cin>>x;
    if(x<1000) cout<<x;
    else if(x<1000000&&x<10000) cout<<round(x/1000*10)/10<<"K";
    else if(x<1000000) cout<<round(x/1000)<<"K";
    else if(x<1e9&&x<1e7) cout<<round(x/1e6*10)/10<<"M";
    else if(x<1e9) cout<<round(x/1e6)<<"M";
    else if(x<1e10) cout<<round(x/1e9*10)/10<<"B";
    else cout<<round(x/1e9)<<"B";
}