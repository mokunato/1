#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j,m_area=0,area;
    vector <vector<int>> x(n);
    vector <pair<int,int>> y;
    for(i=0;i<n;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        x[i].push_back(a);
        x[i].push_back(b);
        x[i].push_back(c);
        x[i].push_back(d);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(x[i][0]>=x[j][0]&&x[i][1]>=x[j][1]&&x[i][2]<=x[j][2]&&x[i][3]<=x[j][3]){
                area=abs((x[i][2]-x[i][0])*(x[i][3]-x[i][1]));
                //cout<<i<<" "<<j<<" "<<area<<" "<<'a'<<endl;
                if(area>=m_area){
                    m_area=area;
                }
            }
            else if(x[i][0]<=x[j][0]&&x[i][1]<=x[j][1]&&x[i][2]>=x[j][2]&&x[i][3]>=x[j][3]){
                area=abs((x[j][2]-x[j][0])*(x[j][3]-x[j][1]));
                //cout<<i<<" "<<j<<" "<<area<<" "<<'b'<<endl;
                if(area>=m_area){
                    m_area=area;
                }
            }
            else if(x[i][0]<x[j][2]&&x[i][1]<x[j][3]&&(x[i][0]>=x[j][0]&&x[i][1]>=x[j][1])){
                area=abs((x[j][2]-x[i][0])*(x[j][3]-x[i][1]));
                if(x[i][3]<x[j][3]) area-=abs((x[j][2]-x[i][0])*(x[j][3]-x[i][3]));
                //cout<<i<<" "<<j<<" "<<area<<" "<<'c'<<endl;
                if(area>=m_area){
                    m_area=area;
                }
            }
            else if(x[i][2]>x[j][0]&&x[i][3]>x[j][1]&&(x[i][2]<=x[j][2]&&x[i][3]<=x[j][3])){
                area=abs((x[i][2]-x[j][0])*(x[i][3]-x[j][1]));
                if(x[i][1]>x[j][1]) area-=abs((x[i][2]-x[j][0])*(x[j][1]-x[i][1]));
                //cout<<i<<" "<<j<<" "<<area<<" "<<'d'<<endl;
                if(area>=m_area){
                    m_area=area;
                }
            }
            else if(x[i][0]<x[j][2]&&x[i][3]>x[j][1]&&(x[i][0]>=x[j][0]&&x[i][3]<=x[j][3])){
                area=abs((x[j][2]-x[i][0])*(x[i][3]-x[j][1]));
                if(x[i][1]>x[j][1]) area-=abs((x[j][2]-x[i][0])*(x[j][1]-x[i][1]));
                //cout<<i<<" "<<j<<" "<<area<<" "<<'e'<<endl;
                if(area>=m_area){
                    m_area=area;
                }
            }
            else if(x[i][2]>x[j][0]&&x[i][1]<x[j][3]&&(x[i][2]<=x[j][2]&&x[i][1]>=x[j][1])){
                area=abs((x[i][2]-x[j][0])*(x[j][3]-x[i][1]));
                if(x[i][3]<x[j][3]) area-=abs((x[j][2]-x[i][0])*(x[j][3]-x[i][3]));
                //cout<<i<<" "<<j<<" "<<area<<" "<<'f'<<endl;
                if(area>=m_area){
                    m_area=area;
                }
            }
        }
    }
    if(m_area==0){
        cout <<"No overlaps";
        return 0;
    }
    cout<<"Max overlapping area = "<<m_area<<endl;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(x[i][0]>=x[j][0]&&x[i][1]>=x[j][1]&&x[i][2]<=x[j][2]&&x[i][3]<=x[j][3]){
                area=abs((x[i][2]-x[i][0])*(x[i][3]-x[i][1]));
                if(area==m_area){
                    cout<<"rectangles "<<i<<" and "<<j<<endl;
                }
            }
            else if(x[i][0]<=x[j][0]&&x[i][1]<=x[j][1]&&x[i][2]>=x[j][2]&&x[i][3]>=x[j][3]){
                area=abs((x[j][2]-x[j][0])*(x[j][3]-x[j][1]));
                //cout<<i<<" "<<j<<" "<<area<<" "<<'b'<<endl;
                if(area==m_area){
                    cout<<"rectangles "<<i<<" and "<<j<<endl;
                }
            }
            else if(x[i][0]<x[j][2]&&x[i][1]<x[j][3]&&(x[i][0]>=x[j][0]&&x[i][1]>=x[j][1])){
                area=abs((x[j][2]-x[i][0])*(x[j][3]-x[i][1]));
                if(x[i][3]<x[j][3]) area-=abs((x[j][2]-x[i][0])*(x[j][3]-x[i][3]));
                //cout<<i<<" "<<j<<" "<<area<<" "<<'c'<<endl;
                if(area==m_area){
                    cout<<"rectangles "<<i<<" and "<<j<<endl;
                }
            }
            else if(x[i][2]>x[j][0]&&x[i][3]>x[j][1]&&(x[i][2]<=x[j][2]&&x[i][3]<=x[j][3])){
                area=abs((x[i][2]-x[j][0])*(x[i][3]-x[j][1]));
                if(x[i][1]>x[j][1]) area-=abs((x[i][2]-x[j][0])*(x[j][1]-x[i][1]));
                //cout<<i<<" "<<j<<" "<<area<<" "<<'d'<<endl;
                if(area==m_area){
                    cout<<"rectangles "<<i<<" and "<<j<<endl;
                }
            }
            else if(x[i][0]<x[j][2]&&x[i][3]>x[j][1]&&(x[i][0]>=x[j][0]&&x[i][3]<=x[j][3])){
                area=abs((x[j][2]-x[i][0])*(x[i][3]-x[j][1]));
                if(x[i][1]>x[j][1]) area-=abs((x[j][2]-x[i][0])*(x[j][1]-x[i][1]));
                //cout<<i<<" "<<j<<" "<<area<<" "<<'e'<<endl;
                if(area==m_area){
                    cout<<"rectangles "<<i<<" and "<<j<<endl;
                }
            }
            else if(x[i][2]>x[j][0]&&x[i][1]<x[j][3]&&(x[i][2]<=x[j][2]&&x[i][1]>=x[j][1])){
                area=abs((x[i][2]-x[j][0])*(x[j][3]-x[i][1]));
                if(x[i][3]<x[j][3]) area-=abs((x[j][2]-x[i][0])*(x[j][3]-x[i][3]));
                //cout<<i<<" "<<j<<" "<<area<<" "<<'f'<<endl;
                if(area==m_area){
                    cout<<"rectangles "<<i<<" and "<<j<<endl;
                }
            }
        }
    }
    /*for(i=0;i<y.size();i++){
        for(j=0;j<y.size()-i-1;j++){
            if(y[j].first>y[j+1].first){
                swap(y[j],y[j+1]);
            }
        }
    }
    cout<<"Max overlapping area = "<<m_area<<endl;
    for(i=0;i<y.size();i++){
        cout<<"rectangles "<<y[i].first<<" and "<<y[i].second<<endl;
    }*/
}