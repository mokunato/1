#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,sum=1,c=-1;
    while(a!=-1){
        cin>>a;
        sum+=a;
        c++;
    }
    if(c!=0)cout<<round(sum/c*100)/100;
    else cout<<"No Data";
}