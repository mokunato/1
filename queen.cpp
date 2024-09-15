#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char x[n][n],x1[n][n];
    int i,j,k,l;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>x[i][j];
            x1[i][j]=x[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(x[i][j]=='Q'){
                for(k=0;k<n;k++){
                    for(l=0;l<n;l++){
                        if(x1[k][l]=='Q'){
                            if(i!=k||j!=l){
                                if(i==k||j==l||(abs(i-k)==abs(j-l))){
                                    //cout<<i<<j<<" "<<k<<l<<endl;
                                    x[i][j]='-';
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           cout<<x[i][j];
        }
        cout<<endl; 
   }
}
