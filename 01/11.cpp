#include<bits/stdc++.h>
using namespace std;
int fac(){
    int s=1;
    for(int i=1;i<11;i++){
        s*=i;
    }
    return s;
}
int main(){
    cout<<(M_PI-fac()/pow(8,8)+pow(log(9.7),(7/sqrt(71)-sin(40*M_PI/180))))/pow(1.2,cbrt(2.3));
}