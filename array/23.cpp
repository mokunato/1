#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <pair<string,int>> x;
    vector <char> y;
    int i,j,b,sum=0;
    string a;
    for(i=0;i<n;i++){
        cin>>a>>b;
        x.push_back(pair(a,b));
    }
    cin.ignore();
    getline(cin,a);
    for(i=0;i<a.size();i++){
        if(a[i]=='-'){
            if(i==3){
                for(j=0;j<x.size();j++){
                    if(a[i+1]==x[j].first[0]&&a[i+2]==x[j].first[1]){
                        y.push_back(a[i+1]);
                        y.push_back(a[i+2]);
                    }
                }
            }
            else{
                for(j=0;j<x.size();j++){
                    if(a[i+1]==x[j].first[0]&&a[i+2]==x[j].first[1]){
                        //cout<<a[i]<<" "<<y[y.size()-2]<<" "<<a[i+1]<<" "<<y[y.size()-1]<<endl;
                        if(a[i+1]!=y[y.size()-2]&&a[i+2]!=y[y.size()-1]){
                            sum+=x[j].second;
                            y.push_back(a[i+1]);
                            y.push_back(a[i+2]);
                        }
                        else{
                            y.push_back(a[i+1]);
                            y.push_back(a[i+2]);
                        }
                    }      
                }      
            }
            //cout<<sum<<endl;
        }
    }
    cout<<sum;
}