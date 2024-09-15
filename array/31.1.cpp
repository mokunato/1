#include<bits/stdc++.h>
using namespace std;
int check(char n){
    return n-48;
}
int pow1(char n,char m){
    int i,j;
    if(n==1){
        for(j=0;j<10;j++){
            if(check(m)==j) return j;
        }
    }
    else for(i=2;i<10;i++){
            if(check(n)==i) return i-2;
        }
}
int main(){
    string x;
    vector <string> y;
    int i,j,k;
    string p0[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string p1[10]={"ten", "eleven", "twelve","thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string p2[10]={"twenty","thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string p3[5]={"hundred","thousand", "million","billion", "trillion"};
    j=x.size();
    k=j/6;
    if(j%3==1){
        y.push_back(p0[check(x[0])]);
        if(j-k*6>3&&j<7) y.push_back(p3[1]);
        if(j-k*6==1) y.push_back(p3[2]);
        if(j-k*6>4) y.push_back(p3[1]);
    }else if(j%3==2){
        if(check(x[0])==1) y.push_back(p1[pow1(x[0],x[1])]);
        else {
            y.push_back(p2[pow1(x[0],x[1])]);
            y.push_back(p0[check(x[1])]);
        }
    }else 
}