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
            if(x[i][0]<x[j][2]&&x[i][1]<x[j][3]){
                area=abs((x[j][0]-x[i][0])*(x[j][1]-x[i][1]));
                if(area>=m_area){
                    m_area=area;
                    y.push_back(pair(i,j));
                }
            }
        }
    }
    for(i=0;i<y.size();i++){
        for(j=0;j<y.size()-i-1;j++){
            if(y[j].first>y[j+1].first){
                swap(y[j],y[j+1]);
            }
        }
    }
    cout<<"Max overlapping area = "<<m_area<<endl;
    for(i=0;i<y.size();i++){
        cout<<"rectangles "<<y[i].first<<" and "<<y[i].second<<endl;
    }
}