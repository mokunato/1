#include<bits/stdc++.h>
using namespace std;
vector <string> x1;
void cut(vector <string> x){
    int i;
    vector <string> temp;
    for(i=x.size()/2;i<x.size();i++){
        temp.push_back(x[i]);
    }
    for(i=0;i<x.size()/2;i++){
        temp.push_back(x[i]);
    }
    for(i=x.size()/2;i<x.size();i++){
        temp.push_back(x[i]);
    }
    for(i=0;i<x.size();i++){
        x1[i]=temp[i];
    }
}
void sub(vector <string> x){
    int i;
    vector <string> temp;
    for(i=0;i<x.size()/2;i++){
        temp.push_back(x[i]);
        temp.push_back(x[i+x.size()/2]);
    }
    for(i=0;i<x.size();i++){
        x1[i]=temp[i];
    }
}
int main(){
    int n;
    cin>>n;
    string a;
    string y;
    int i;
    for(i=0;i<n;i++){
        cin>>a;
        x1.push_back(a);
    }
    cin.ignore();
    getline(cin,y);
    for(i=0;i<y.size();i++){
        if(y[i]=='C'){
            cut(x1);
        }
        else if(y[i]=='S'){
            sub(x1);
        }
    }
    for(auto i:x1){
        cout<<i<<" ";
    }
}