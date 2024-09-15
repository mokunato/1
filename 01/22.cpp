#include<bits/stdc++.h>
using namespace std;
int main(){
    float xe,ye,re,rp,xm,ym ;
    cin>>xe>>ye>>re>>rp>>xm>>ym ;
    float A=xm-xe,B=ym-ye,C=sqrt(A*A+B*B);
    float a,b,c=re-rp;
    a=A*c/C;
    b=B*c/C;
    cout<<round(xe+a)<<" "<<round(ye+b);    
}