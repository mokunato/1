#include<bits/stdc++.h>
using namespace std;
long long Pow(long long i){
    long long s=1;
    for(long long j=0;j<i;j++){
        s*=10;
    }
    return s;
}
int main(){
    long long n,m;
    long long i,dn,dm,sum=0;
    cin>>n>>m;
    for(i=0;i<1e17;i++){
        if(n/Pow(i)<10){
            dn=i;
            break;
        }
    }
    for(i=0;i<1e17;i++){
        if(m/Pow(i)<10){
            dm=i;
            break;
        }
    }
    if(dm!=dn){
        sum+=(m-Pow(dm)+1)*(dm+1);
        sum+=(Pow(dn+1)-n)*(dn+1);
        if(dm-2>=dn){
            for(i=dn+1;i<dm;i++){
                sum+=(i+1)*(Pow(i+1)-Pow(i));
            }
        }
    }else {
        sum+=(m-n+1)*(dm+1);
    }
    cout<<sum;  
}