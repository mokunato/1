#include<bits/stdc++.h>
using namespace std;
string p0[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string p1[10]={"ten", "eleven", "twelve","thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string p2[10]={"twenty","thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
string p3[5]={"hundred","thousand", "million","billion", "trillion"};
int check(char n){
    return n-48;
}
int pow1(char n,char m){
    if(n=='1'){
        return check(m);
    }else{
        return check(n)-2;
    }
}  
void printpow1(char n,char m){
    if(check(n)==1) cout<<p1[pow1(n,m)]<<" ";
    else{
        cout<<p2[pow1(n,m)]<<" ";
        cout<<p0[check(m)];
    }
}
int main(){
    string x;
    cin>>x;
    int i=0,j,k,l,c;
    k=x.size();
    if(k==1&&x[0]=='0') {
        cout<<"zero";
        return 0;
    }else if(k==2){
        if(check(x[0])==1) cout<<p1[pow1(x[0],x[1])];
        else {
            cout<<p2[pow1(x[0],x[1])]<<" ";
            if(x[1]!='0')cout<<p0[check(x[1])];
        }
        return 0;
    }
    if(k%3==1&&k!=1){
        cout<<p0[check(x[0])]<<" ";
        if(k==15){
            cout<<p3[0]<<" ";
        }else if(k==13){
            cout<<p3[4]<<" ";
        }else if(k==12){
            cout<<p3[0]<<" ";
        }else if(k==10){
            cout<<p3[3]<<" ";
        }else if(k==9){
            cout<<p3[0]<<" ";
        }else if(k==7){
            cout<<p3[2]<<" ";
        }else if(k==6){
            cout<<p3[0]<<" ";
        }else if(k==4){
            cout<<p3[1]<<" ";
        }else if(k==3){
            cout<<p3[0]<<" ";
        }
        i=1;
        k--;
        l=1;
    }else if(k%3==2&&k!=2){
        if(check(x[0])==1) cout<<p1[pow1(x[0],x[1])]<<" ";
        else {
            cout<<p2[pow1(x[0],x[1])]<<" ";
            if(x[1]!='0')cout<<p0[check(x[1])]<<" ";
        }
        k--;
        if(k==15){
            cout<<p3[0]<<" ";
        }else if(k==13){
            cout<<p3[4]<<" ";
        }else if(k==12){
            cout<<p3[0]<<" ";
        }else if(k==10){
            cout<<p3[3]<<" ";
        }else if(k==9){
            cout<<p3[0]<<" ";
        }else if(k==7){
            cout<<p3[2]<<" ";
        }else if(k==6){
            cout<<p3[0]<<" ";
        }else if(k==4){
            cout<<p3[1]<<" ";
        }else if(k==3){
            cout<<p3[0]<<" ";
        }
        i=2;
        k--;
        l=2;
    }
while(k>1){
    if((i-l)%3==0)c=0;
    if(x[i]!='0'){
        if((i-l)%3==2){
            if(x[i-1]!='1')cout<<p0[check(x[i])]<<" ";
            c=1;
        }
        if((i-l)%3==1){
            if(check(x[i])==1) {cout<<p1[pow1(x[i],x[i+1])]<<" ";
            }   
            else {
            cout<<p2[pow1(x[i],x[i+1])]<<" ";
            }
            c=1;
        }
        if((i-l)%3==0){
            cout<<p0[check(x[i])]<<" ";
            c=1;
        }
    }
    if(k==15){
        if(x[i]!='0')cout<<p3[0]<<" ";
    }else if(k==13){
        if(c==1)cout<<p3[4]<<" ";
    }else if(k==12){
        if(x[i]!='0')cout<<p3[0]<<" ";
    }else if(k==10){
        if(c==1)cout<<p3[3]<<" ";
    }else if(k==9){
        if(x[i]!='0')cout<<p3[0]<<" ";
    }else if(k==7){
        if(c==1)cout<<p3[2]<<" ";
    }else if(k==6){
        if(x[i]!='0')cout<<p3[0]<<" ";
    }else if(k==4){
        if(c==1)cout<<p3[1]<<" ";
    }else if(k==3){
        if(x[i]!='0')cout<<p3[0]<<" ";
    }
    k--;
    i++;
}
    if(x[i-1]!='1'&&x[i]!='0')cout<<p0[check(x[i])];
}