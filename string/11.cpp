#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    for(int i=0;i<12;i++){
        cout<<n[i];
        if(i==0||i==4||i==9||i==11){
            cout<<'-';
        }
    }
    for(int i=0;i<13;i++){
        n[i]=n[i]-48;
        //cout<<n[i];
    }
    n[12] = (11 - (13*n[0]+12*n[1]+11*n[2]+10*n[3]+9*n[4]+8*n[5]+7*n[6]+6*n[7]+5*n[8]+4*n[9]+3*n[10]+2*n[11]) % 11) % 10;
    cout<<n[12]+0<<endl;
}