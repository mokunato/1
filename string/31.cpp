#include<bits/stdc++.h>
using namespace std;
long gcd(long a, long b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}
/*int check(int x){
    int c=0;
    while(x>0){
        c++;
        x/=10;
    }
    return c;
}*/
int main(){
    int x,y=0,z=0;
    string y1,z1;
    int i,j,a=0,b=0,m,n,l;
    cin>>x>>y1>>z1;
    if(y1.size()==1&&y1[0]=='0'&&z==0){
        cout<<x<<" "<<"/"<<" "<<1;
        return 0;
    }
    if(y1[0]=='0'){
        for(i=0;i<y1.size();i++){
            if(y1[i]!='0'){
                for(j=i;j<y1.size();j++){
                    y+=(y1[j]-48)*pow(10,(y1.size()-j-1));
                }
                break;
            }
        }
    }else {
        for(j=0;j<y1.size();j++){
                y+=(y1[j]-48)*pow(10,(y1.size()-j-1));
        }
    }
    if(z1[0]=='0'){
        for(i=0;i<z1.size();i++){
            if(z1[i]!='0'){
                for(j=i;j<z1.size();j++){
                    z+=(z1[j]-48)*pow(10,(z1.size()-j-1));
                }
                break;
            }
        }
    }else {
        for(j=0;j<z1.size();j++){
                z+=(z1[j]-48)*pow(10,(z1.size()-j-1));
        }
    }
    //cout<<y<<" "<<z<<endl;
    
    b=pow(10,y1.size());
    for(i=0;i<z1.size();i++){
        a+=pow(10,i);
    }
    if(z==0) a=0;
    if(a==0) n=b;
    else n=9*a*b;
    if(z==0) m=y+n*x;
    else m=y*pow(10,z1.size())+z-y+n*x;
    //cout<<m<<" "<<n<<endl;
    l=gcd(m,n);
    cout<<m/l<<" "<<"/"<<" "<<n/l;
}