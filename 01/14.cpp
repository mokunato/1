#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    x-=543;
    int c=x/100;
    int y=x-c*100;
    cout<<(y+y/4+11)%7;
}