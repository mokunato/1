#include<bits/stdc++.h>
using namespace std;
bool issame(string y,string x){
    for(int i=0;i<x.size();i++){
        if(y[i]!=x[i]) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    string name[n];
    string grade[n];
    string y; 
    float c[n],max=-1;
    int i,j;
    for(i=0;i<n;i++){
        cin>>name[i];
        cin>>grade[i];
        if(grade[i]=="A"){
            c[i]=4;
        }else if(grade[i]=="B+"){
            c[i]=3.5;
        }else if(grade[i]=="B"){
            c[i]=3;
        }else if(grade[i]=="C+"){
            c[i]=2.5;
        }else if(grade[i]=="C"){
            c[i]=2;
        }else if(grade[i]=="D+"){
            c[i]=1.5;
        }else if(grade[i]=="D"){
            c[i]=1;
        }else if(grade[i]=="F"){
            c[i]=0.5;
        }
    }
    while(cin>>y){
        for(i=0;i<n;i++){
            if(issame(y,name[i])){
                if(y[y.size()-1]=='+'&&c[i]!=4){
                    c[i]+=0.5;
                }else if(y[y.size()-1]=='-'&&c[i]!=0.5) c[i]-=0.5;
            }
        }
        
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(c[j]<c[j+1]){
                swap(c[j],c[j+1]);
                swap(name[j],name[j+1]);
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<name[i]<<" ";
        if(c[i]==4){
            cout<<"A";
        }else if(c[i]==3.5){
            cout<<"B+";
        }else if(c[i]==3){
            cout<<"B";
        }else if(c[i]==2.5){
            cout<<"C+";
        }else if(c[i]==2){
            cout<<"C";
        }else if(c[i]==1.5){
            cout<<"D+";
        }else if(c[i]==1){
            cout<<"D";
        }else if(c[i]==0.5){
            cout<<"F";
        }
        cout<<endl;
    }
}