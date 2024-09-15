#include<bits/stdc++.h>
using namespace std;
double Frac(long double A[],int i){
    int j;
    long double sum=0;
    for(j=i;j>0;j--){
        if(A[j]!=0||sum!=0)
        sum=1/(A[j]+sum);
    }
    return sum+A[j];
}
int main(){
    int n;
    cin>>n;
    long double A[n];
    int i; 
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    for(i=0;i<n;i++){
        cout<< setprecision(10) <<Frac(A,i) << endl;
    }
}