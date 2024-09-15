#include<bits/stdc++.h>
using namespace std;
int main(){
    double x[4], min=1e9,max=-1e9,s=0;
    for(int i=0;i<4;i++){
        cin>>x[i];
        if(x[i]>max){
            max=x[i];
        }
        if(x[i]<min){
            min=x[i];
        }
    }
    for(int i=0;i<4;i++){
        if(x[i]==max){
            x[i]=0;
            break;
        }
    }
    for(int i=0;i<4;i++){
        if(x[i]==min){
            x[i]=0;
            break;
        }
    }
    for(int i=0;i<4;i++){
        s+=x[i];
    }
    s=s/2;
    cout<<round(s*100.0)/100.0;
}