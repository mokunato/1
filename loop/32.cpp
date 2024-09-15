#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    string y="YGNBPK";
    cin.ignore();
    for(i=0;i<n;i++){
        string x;
        getline(cin,x);
        int l=0,k=0,sum=0,c=0,c1=0;
        for(j=0;j<x.size();j++){
            if(j%2==0){
                if(x[0]!='R'){
                    cout<<"WRONG_INPUT"<<endl;
                    c=1;
                    break;
                }
                if(x[j]=='R'&&x[j+2]=='R'){
                    cout<<"WRONG_INPUT"<<endl;
                    c=1;
                    break;
                }
                if(x[j]=='R'){
                    sum+=1;
                    if(j==x.size()-1) break;
                    l=0;
                    for(k=0;k<6;k++){
                        if(x[j+2]==y[k]) sum+=k+2;
                    }
                    for(k=j+4;k<x.size();k++){
                        if(k%2==0){
                            if(x[k]=='R'&&c1==0) break;
                            if(x[k]==y[l]){
                                sum+=l+2;
                                c1=1;
                            }else {
                                cout<<"WRONG_INPUT"<<endl;
                                c=1;
                                break; 
                            }
                            l++;
                        }
                    }
                }
            }
            if(c==1)break;
        }
        if(c==0)cout<<sum<<endl;
    }
}