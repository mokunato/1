#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    int n;
    cin>>n;
    int i,num,a,b,sum;
    num=x[0]-48;
    a=x[1];
    b=x[2];
    sum=(x[4]-48)*100+(x[5]-48)*10+(x[6]-48);
    while(n>0){
        if(sum<999){
            sum+=1;
        }
        else if(b<'Z'){
            b+=1;
            sum=0;
        }
        else if(a<'Z'){
            a+=1;
            sum=0;
            b='A';
        }
        else {
            num+=1;
            sum=0;
            b='A';
            a='A';
        }
        n--;
    }
    char a1=a,b1=b;
    cout<<num<<a1<<b1<<"-"<<sum;
}