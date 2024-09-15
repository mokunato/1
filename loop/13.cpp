#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    int i,j,k,c,sum=0,m;
    cin.ignore();
    getline(cin,b);
    for(i=0;i<b.size();i++){
        c=0;
        if(i==0){
            k=i+a.size();
            for(j=0;j<a.size();j++){
                //cout<<i<<" "<<j<<" "<<b[i]<<" "<<a[j]<<endl;
                if(b[i]==a[j]){
                    if(b[k]==' '||b[k]=='\"'||b[k]=='('||b[k]==')'||b[k]==','||b[k]=='.'||b[k]=='\''||b[k]=='{'||b[k]=='}'||b[k]=='['||b[k]==']')
                    c++;
                }else break;
                i++;
            }
            if(c==a.size()) sum++;
            //cout<<"c="<<c<<endl;
        }
        c=0;
        if((b[i]==' '||b[i]=='\"'||b[i]=='('||b[i]==')'||b[i]==','||b[i]=='.'||b[i]=='\''||b[i]=='{'||b[i]=='}'||b[i]=='['||b[i]==']')&&i!=b.size()-a.size()-1){
            k=i+a.size()+1;
            m=i+1;
            for(j=0;j<a.size();j++){
                //cout<<i<<" "<<j<<" "<<b[i]<<" "<<a[j]<<endl;
                if(b[m]==a[j]){
                    if(b[k]==' '||b[k]=='\"'||b[k]=='('||b[k]==')'||b[k]==','||b[k]=='.'||b[k]=='\''||b[k]=='{'||b[k]=='}'||b[k]=='['||b[k]==']')
                    c++;
                }else break;
                i++;
                m++;
            }
            if(c==a.size()) sum++;
            //cout<<"c="<<c<<endl;
        }
        c=0;
        if((b[i]==' '||b[i]=='\"'||b[i]=='('||b[i]==')'||b[i]==','||b[i]=='.'||b[i]=='\''||b[i]=='{'||b[i]=='}'||b[i]=='['||b[i]==']')&&i==b.size()-a.size()-1){
            m=i+1;
            for(j=0;j<a.size();j++){
                //cout<<3<<" "<<i<<" "<<j<<" "<<b[i]<<" "<<a[j]<<endl;
                if(b[m]==a[j]){
                    c++;
                }else break;
                i++;
                m++;
            }
            if(c==a.size()) sum++;
            //cout<<"c="<<c<<endl;
        }
    }
    cout<<sum;
}