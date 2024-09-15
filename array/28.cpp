#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    getline(cin,x);
    int i,j,a;
    vector <pair<char,int>> y;
    int c[26];
    for(i=0;i<x.size();i++){
        a=0;
        for(j=0;j<y.size();j++){
            if(isupper(x[i])){
                if(x[i]+32==y[j].first){
                y[j].second++;
                a=1;
                }
            }
            else if(islower(x[i])){
                if(x[i]==y[j].first){
                y[j].second++;
                a=1;
                }
            }
        }
        if(a==0){
            if(isupper(x[i])){
                y.push_back(pair((x[i]+32),1));
            }else if(islower(x[i])){
                y.push_back(pair((x[i]),1));
            }
        }
    }
    for(i=0;i<y.size();i++){
        for(j=0;j<y.size()-i-1;j++){
            if(y[j].first>y[j+1].first){
                swap(y[j],y[j+1]);
            }
        }
    }
    for(i=0;i<y.size();i++){
        cout<<y[i].first<<" -> "<<y[i].second<<endl;
    }
}