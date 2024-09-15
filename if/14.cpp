#include<bits/stdc++.h>
using namespace std;
int main(){
    string x,x1;
    float y,y1;
    char a,b,c,a1,b1,c1;
    cin>>x>>y>>a>>b>>c;
    cin>>x1>>y1>>a1>>b1>>c1;
    if(a!='A'&&a1!='A') cout<<"None";
    else if(a=='A'&&a1=='A'){
        if(b>'C'||c>'C'){
            if(b1>'C'||c1>'C') cout<<"None";
            else if(b1<='C'&&c1<='C') cout<<x1;
        }
        else if(b<='C'&&c<='C'){
            if(b1>'C'||c1>'C') cout<<x;
            else if(b1<='C'&&c1<='C'){
                if(y>y1) cout<<x;
                else if(y<y1) cout<<x1;
                else{
                    if(b<b1) cout<<x;
                    else if(b>b1) cout<<x1;
                    else{
                        if(c<c1) cout<<x;
                        else if(c>c1) cout<<x1;
                        else cout<<"Both";
                    }
                }
            }
        }
    }
    else if(a=='A'&&b<='C'&&c<='C') cout<<x;
    else if(a1=='A'&&b1<='C'&&c1<='C') cout<<x1;
    else cout<<"None";
}