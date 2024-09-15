#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    getline(cin,x);
    int i,a=0,j,n,k,l;
    vector <char> y;
    vector <char> z;
    for(i=0;x[i]!=' ';i++){
        if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'){          
            if(a==0){
                j=i;
                a=1;
            }
        }
        if(a==1) y.push_back(x[i]);
    }
    for(i=x.size()-1;x[i]!=' ';i--){
        l=i;
    }
    for(i=l;i<x.size();i++){
        if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'){ 
            if(a==1){
                a=0;
                k=i;
            }
        }
        if(a==0) z.push_back(x[i]);
    }
    for(i=0;i<x.size();i++){
        if(i==j){
            for(n=0;n<z.size();n++){
                cout<<z[n];
            }
            i+=y.size()-1;
        }
        else if(i==k){
            for(n=0;n<y.size();n++){
                cout<<y[n];
            }
            break;
        }
        else {
            cout<<x[i];
        }
    }
}