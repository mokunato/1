#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    string y;
    int i=0,j=0,a;
    while(true){
        string x;
        cin>>x;
        j=0;
        if(x=="END") break;
        for(i=x.size()-1;i>=0;i--){
            a=x[i]-49;
            y[j]+=1;
            cout<<y[i];
            j++;
        }
    }
}