#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    double x[n][m];
    int i,j,k,l;
    double sum;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>x[i][j];
        }
    }
    for(i=0;i<n-2;i++){
        for(j=0;j<m-2;j++){
            sum=0;
            for(k=i;k<i+3;k++){
                for(l=j;l<j+3;l++){
                    sum+=x[k][l];
                }
            }
            cout<<round(sum/9*100)/100<<" ";
        }
        cout<<endl;
    }
}