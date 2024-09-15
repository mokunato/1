#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <string> x;
    vector <pair<string,int>> a={{"soon",0},{"neung",1}, {"song",2}, {"sam",3}, {"si",4}, {"ha",5}, {"hok",6}, {"chet",7}, {"paet",8}, {"kao",9}, {"et",1}, {"yi",2}, {"sip",10}, {"roi",100}, {"phan",1000}, {"muen",1e4}, {"saen",1e5}, {"lan",1e6}};;
    string y,word;
    while(y!="q"){
        int sum=0,b=0,l=0;
        getline(cin,y);
        istringstream iss(y);
        while (iss >> word) {
            x.push_back(word);
            b++;
        }
        if(x[0]=="sip"&&b==1) {
            if(y!="q")cout<<10<<endl;
            x.clear();
            continue;
        }
        for (int j=0;j<b-1;j+=2) {   
            for(const auto& w1 : a){
                if(x[j]==w1.first&&x[j]!="sip"){
                    for(const auto& w2 : a){
                        if(x[j+1]==w2.first){
                            sum+=w1.second*w2.second;
                        }
                    }
                }else if(x[j]==w1.first&&x[j]=="sip"){
                    for(const auto& w3 : a){
                        if(x[j+1]==w3.first){
                            sum+=10+w3.second;
                        }
                    }
                }
            }
        }
        for(const auto& c : a){
            if(x[b-1]==c.first&&b%2!=0) sum+=c.second;
        }
        if(y!="q")cout<<sum<<endl;
        x.clear();
    }
}
