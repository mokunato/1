#include<bits/stdc++.h>
using namespace std;
int c(int x[],int y[],int n){
    int C;
    for(int l=0;l<n;l++){
        if(x[l]!=y[l]){
            C=1;
            break;
        }else C=0;
    }
    if(C==1) return 1;
    else return 0;
}
int main(){
    int n,i=1,j,k,l,C=0;
    cin>>n;
    int x[n],y[n],m=n-1;
    for(i=0;i<n;i++){
        cin>>x[i];
        y[i]=x[i];
        cout<<x[i]<<" ";
    }
    i=0;
    cout<<endl;
    sort(y,y+n);
    if(c(x,y,n)==0){
        return 0;
    }
    while(m>0){
       // cout<<x[i]<<" "<<y[m]<<" "<<i<<endl;
        if(x[i]==y[m]&&i>0&&i!=m){
            k=i;
            for(j=0;j<(i+1)/2;j++){
                swap(x[j],x[k]);
                k--;
            }
            for(l=0;l<n;l++){
                cout<<x[l]<<" ";
            }
            cout<<endl;
            k=m;
            for(j=0;j<(m+1)/2;j++){
                swap(x[j],x[k]);
                k--;
            }
            for(l=0;l<n;l++){
                cout<<x[l]<<" ";
            }
            cout<<endl;
            i=-1;
            m--;
        }else if(x[i]==y[m]&&i==0){
            k=m;
            for(j=0;j<(m+1)/2;j++){
                swap(x[j],x[k]);
                k--;
            }
            for(l=0;l<n;l++){
                cout<<x[l]<<" ";
            }
            cout<<endl;
            i=-1;
            m--;
        }
        i++; 
        if(i>m){
            i=0;
            m--;
        }       
    }  
}