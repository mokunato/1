#include<bits/stdc++.h>
using namespace std;
int main(){
    int d,m,y,d1,m1,y1,n=0;
    cin>>d>>m>>y>>d1>>m1>>y1;
    y-=543;
    y1-=543;
    for(int i=y;i<y1+1;i++){
        if(i%400==0||(i%4==0&&i%100!=0)){
            if(i==y){
                if(m==1){
                    n+=366-d;
                }else if(m==2){
                    n+=335-d;
                }else if(m==3){
                    n+=306-d;
                }else if(m==4){
                    n+=275-d;
                }else if(m==5){
                    n+=245-d;
                }else if(m==6){
                    n+=214-d;
                }else if(m==7){
                    n+=184-d;
                }else if(m==8){
                    n+=153-d;
                }else if(m==9){
                    n+=122-d;
                }else if(m==10){
                    n+=92-d;
                }else if(m==11){
                    n+=61-d;
                }else if(m==12){
                    n+=31-d;
                }
            }
            else if(i!=y1){
                n+=365;
            }
            else{
                if(m1==1){
                    n+=d1;
                }else if(m1==2){
                    n+=31+d1;
                }else if(m1==3){
                    n+=60+d1;
                }else if(m1==4){
                    n+=91+d1;
                }else if(m1==5){
                    n+=121+d1;
                }else if(m1==6){
                    n+=152+d1;
                }else if(m1==7){
                    n+=182+d1;
                }else if(m1==8){
                    n+=213+d1;
                }else if(m1==9){
                    n+=244+d1;
                }else if(m1==10){
                    n+=274+d1;
                }else if(m1==11){
                    n+=305+d1;
                }else if(m1==12){
                    n+=335+d1;
                }
            }
        }else {
            if(i==y){
                if(m==1){
                    n+=365-d;
                }else if(m==2){
                    n+=334-d;
                }else if(m==3){
                    n+=306-d;
                }else if(m==4){
                    n+=275-d;
                }else if(m==5){
                    n+=245-d;
                }else if(m==6){
                    n+=214-d;
                }else if(m==7){
                    n+=184-d;
                }else if(m==8){
                    n+=153-d;
                }else if(m==9){
                    n+=122-d;
                }else if(m==10){
                    n+=92-d;
                }else if(m==11){
                    n+=61-d;
                }else if(m==12){
                    n+=31-d;
                }
            }
            else if(i!=y1){
                n+=365;
            }else {
                if(m1==1){
                    n+=d1;
                }else if(m1==2){
                    n+=31+d1;
                }else if(m1==3){
                    n+=59+d1;
                }else if(m1==4){
                    n+=90+d1;
                }else if(m1==5){
                    n+=120+d1;
                }else if(m1==6){
                    n+=151+d1;
                }else if(m1==7){
                    n+=181+d1;
                }else if(m1==8){
                    n+=212+d1;
                }else if(m1==9){
                    n+=243+d1;
                }else if(m1==10){
                    n+=273+d1;
                }else if(m1==11){
                    n+=304+d1;
                }else if(m1==12){
                    n+=334+d1;
                }
            }
        }
    }
    cout<<n<<" "<<round(sin(2*M_PI*n/23)*100)/100<<" "<<round(sin(2*M_PI*n/28)*100)/100<<" "<<round(sin(2*M_PI*n/33)*100)/100;
}