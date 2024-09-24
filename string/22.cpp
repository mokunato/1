#include<bits/stdc++.h>
using namespace std;
int main(){
    string x,y;
    getline(cin,x);
    getline(cin,y);
    int i,j,k,max=-1,min=1e9,a;
    for(i=0;i<x.size();i++){
        int check=0;
        k=0;
        for(j=i;j<x.size();j++){
            if(x[j]==y[k]){
                check++;
            }
            k++;
        }
        if(check>max){
            //cout<<i<<" "<<check<<endl;
            max=check;
            min=i;
            a=1;
        }
    }
    for(i=0;i<y.size();i++){
        int check=0;
        k=0;
        for(j=i;j<y.size();j++){
            if(x[k]==y[j]){
                check++;
            }
            k++;
        }
        if(check>max){
            //cout<<i<<" "<<check<<endl;
            max=check;
            min=i;
            a=0;
        }
    }
    //cout<<min<<endl;
    if(a==0){
        for(i=0;i<min;i++){
            cout<<"-";
        }
        for(i=0;i<x.size();i++){
            cout<<x[i];
        }
        cout<<endl;
        for(i=0;i<y.size();i++){
            cout<<y[i];
        }
        cout<<endl;
        cout<<max;
    }
    else if(a==1){
        for(i=0;i<x.size();i++){
            cout<<x[i];
        }
        cout<<endl;
        for(i=0;i<min;i++){
            cout<<"-";
        }
        for(i=0;i<y.size();i++){
            cout<<y[i];
        }
        cout<<endl;
        cout<<max;
    }
}