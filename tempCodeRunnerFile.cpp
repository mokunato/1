#include<bits/stdc++.h>
using namespace std;
int main(){
    float p,k=1,t=1;
    cin>>p;
    while(t>1-p){
        t=t*(366-k)/365;
        k++;
    }
    cout<<k;
}