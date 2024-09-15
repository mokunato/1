#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    vector <pair<int,pair<int,int>>> lift;
    vector <pair<int,int>> per;
    int sum[100];
    int i,j,l,a,b;
    for(i=0;i<n;i++){
        cin>>l>>a>>b;
        lift.push_back(pair(l,pair(a,b)));
    }
    cin>>m;
    for(i=0;i<m;i++){
        cin>>a>>b;
        per.push_back(pair(a,b));
        int  min=1e9,ans;
        for(j=0;j<n;j++){
            int bl=lift[j].second.first;
            int el=lift[j].second.second;
            int bp=per[i].first;
            int ep=per[i].second;
            if(el<bl){
                if(ep<=el){
                    if(bp>bl){
                        sum[j]=bp-el+bp-ep;
                    }
                    else if(bp>el){
                        sum[j]=el-ep;
                    }
                    else if(bp>ep) sum[j]=el-ep;
                    else sum[j]=el-bp+ep-bp;
                }
                else if(ep<=bl){
                    if(bp>bl){
                        sum[j]=bp-el+bp-ep;
                    }else if(bp>=el){
                        if(bp>ep) sum[j]=0;
                        else sum[j]=ep-el;
                    }else sum[j]=el-bp+ep-bp;
                }
                else {
                    if(bp>bl){
                        if(bp<ep) sum[j]=ep-el;
                        else sum[j]=bp-el+bp-ep;
                    }else if(bp>=el){
                        sum[j]=ep-el;
                    }else sum[j]=el-bp+ep-bp;
                }
            }
            else if(el>bl){
                if(ep<=bl){
                    if(bp>el){
                        sum[j]=-el+bp-ep+bp;
                    }
                    else if(bp>=bl){
                        sum[j]=el-ep;
                    }
                    else if(bp>ep) sum[j]=el-ep;
                    else sum[j]=el-bp+ep-bp;
                }
                else if(ep<=el){
                    if(bp>el){
                        sum[j]=bp-el+bp-ep;
                    }else if(bp>=bl){
                        if(bp<ep) sum[j]=0;
                        else sum[j]=el-ep;
                    }else sum[j]=el-bp+ep-bp;
                }
                else {
                    if(bp>el){
                        if(bp<ep) sum[j]=ep-el;
                        else sum[j]=bp-el+bp-ep;
                    }else if(bp>=bl){
                        sum[j]=ep-el;
                    }else sum[j]=el-bp+ep-bp;
                }
            }
            else {
                if(ep<=bl){
                    if(bp>el){
                        sum[j]=-el+bp-ep+bp;
                    }
                    else if(bp>=bl){
                        sum[j]=el-ep;
                    }
                    else if(bp>ep) sum[j]=el-ep;
                    else sum[j]=el-bp+ep-bp;
                }
                else if(ep<=el){
                    if(bp>el){
                        sum[j]=bp-el+bp-ep;
                    }else if(bp>=bl){
                        if(bp<ep) sum[j]=0;
                        else sum[j]=el-ep;
                    }else sum[j]=el-bp+ep-bp;
                }
                else {
                    if(bp>el){
                        if(bp<ep) sum[j]=ep-el;
                        else sum[j]=bp-el+bp-ep;
                    }else if(bp>=bl){
                        sum[j]=ep-el;
                    }else sum[j]=el-bp+ep-bp;
                }
            }
            if(sum[j]<min){
                min=sum[j];
                ans=lift[j].first;
            }if(sum[j]==min){
                if(lift[j].first<ans){
                    ans=lift[j].first;
                }
            }
            //cout<<sum[j]<<endl;
        }
        cout<<">> " <<ans<<endl;
    }
}