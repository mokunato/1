#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    int i,a,b,c,d,e;
    while(cin>>x){
        a=0,b=0,c=0,d=0,e=0;
        if(x.size()>=12){
            for(i=0;i<x.size();i++){
                if(isdigit(x[i])) a++;
                else if(islower(x[i])) b++;
                else if(isupper(x[i])) c++;
                else if(!isalnum(x[i])) d++;
            }
            if(a>0&&b>0&&c>0&&d>0){
                cout<<">> strong"<<endl;
                e++;
            }
        }
        if(x.size()>=8&&e==0){
            a=0,b=0,c=0,d=0;
            for(i=0;i<x.size();i++){
                if(isdigit(x[i])) a++;
                else if(islower(x[i])) b++;
                else if(isupper(x[i])) c++;
            }
            if(a>0&&b>0&&c>0){
                cout<<">> weak"<<endl;
                e++;
            }
        }
        if(e==0) cout<<">> invalid"<<endl;
    }
}