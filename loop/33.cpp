#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,a[100000],b[100000],b1=0,a1=0,n=0,n1=0;
    float i=1;
    while(true){
        cin>>x;
        if(x==-998){
            sort(a,a+a1);
            cout<<a[0]<<" ";
            sort(b,b+b1);
            cout<<b[b1-1];
            break;
        }
        if(x==-999){
            sort(b,b+b1);
            cout<<b[0]<<" ";
            sort(a,a+a1);
            cout<<a[a1-1];
            break;
            
        }

        if((i-1)/4==n1){
            a[a1]=x;
            //cout<<'a'<<a[a1]<<endl;
            a1++;
            n1++;
        }else if((i-4)/4==n){
            a[a1]=x;
            //cout<<'a'<<a[a1]<<endl;
            a1++;
            n++;
        }
        else {
            b[b1]=x;
            //cout<<'b'<<b[b1]<<endl;
            b1++;
        }
        i++;
    }
}