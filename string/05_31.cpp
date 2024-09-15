#include<bits/stdc++.h>
using namespace std;
string word;
int reset(int j){
    if(j>word.size()-1) return 0;
    else return j;
}
char upper(char y){
    if(islower(y)){
        return y-32;
    }
    else  {
        return y;
    }
}
char lower(char y){
    if(isupper(y)){
        return y+32;
    }
    else { 
        return y;
    }
}
void Encode(vector <char> num){
    int i,j=0,k;
    for(i=0;i<num.size();i++){
        if(num[i]=='0'){
            for(k=0;k<4;k++){
                j=reset(j);
                if(isalpha(word[j])) {
                    cout<<upper(word[j]);
                }
                else {
                    cout<<word[j];
                    k--;
                }
                j++;
            }        
        }
        else if(num[i]=='1'){
            for(k=0;k<4;k++){
                j=reset(j);
                if(isalpha(word[j])&&(k==0||k==1||k==2)) {
                    cout<<upper(word[j]);
                }else if(isalpha(word[j])&&(k==3)) {
                    cout<<lower(word[j]);
                }
                else {
                    cout<<word[j];
                    k--;
                }
                j++;
            }
        }
        else if(num[i]=='2'){
            for(k=0;k<4;k++){
                j=reset(j);
                if(isalpha(word[j])&&(k==0||k==1||k==3)) {
                    cout<<upper(word[j]);
                }else if(isalpha(word[j])&&(k==2)) {
                    cout<<lower(word[j]);
                }
                else {
                    cout<<word[j];
                    k--;
                }
                j++;
            }
        }
        else if(num[i]=='3'){
            for(k=0;k<4;k++){
                j=reset(j);
                if(isalpha(word[j])&&(k==0||k==1)) {
                    cout<<upper(word[j]);
                }else if(isalpha(word[j])&&(k==2||k==3)) {
                    cout<<lower(word[j]);
                }
                else {
                    cout<<word[j];
                    k--;
                }
                j++;
            }
        }
        else if(num[i]=='4'){
            for(k=0;k<4;k++){
                j=reset(j);
                if(isalpha(word[j])&&(k==3||k==0||k==2)) {
                    cout<<upper(word[j]);
                }else if(isalpha(word[j])&&(k==1)) {
                    cout<<lower(word[j]);
                }
                else {
                    cout<<word[j];
                    k--;
                }
                j++;
            }
        }
        else if(num[i]=='5'){
            for(k=0;k<4;k++){
                j=reset(j);
                if(isalpha(word[j])&&(k==0||k==2)) {
                    cout<<upper(word[j]);
                }else if(isalpha(word[j])&&(k==1||k==3)) {
                    cout<<lower(word[j]);
                }
                else {
                    cout<<word[j];
                    k--;
                }
                j++;
            }
        }
        else if(num[i]=='6'){
            for(k=0;k<4;k++){
                j=reset(j);
                if(isalpha(word[j])&&(k==3||k==0)) {
                    cout<<upper(word[j]);
                }else if(isalpha(word[j])&&(k==1||k==2)) {
                    cout<<lower(word[j]);
                }
                else {
                    cout<<word[j];
                    k--;
                }
                j++;
            }
        }
        else if(num[i]=='7'){
            for(k=0;k<4;k++){
                j=reset(j);
                if(isalpha(word[j])&&(k==0)) {
                    cout<<upper(word[j]);
                }else if(isalpha(word[j])&&(k==1||k==2||k==3)) {
                    cout<<lower(word[j]);
                }
                else {
                    cout<<word[j];
                    k--;
                }
                j++;
            }
        }
        else if(num[i]=='8'){
            for(k=0;k<4;k++){
                j=reset(j);
                if(isalpha(word[j])&&(k==1||k==2||k==3)) {
                    cout<<upper(word[j]);
                }else if(isalpha(word[j])&&(k==0)) {
                    cout<<lower(word[j]);
                }
                else {
                    cout<<word[j];
                    k--;
                }
                j++;
            }
        }
        else if(num[i]=='9'){
            for(k=0;k<4;k++){
                j=reset(j);
                if(isalpha(word[j])&&(k==1||k==2)) {
                    cout<<upper(word[j]);
                }else if(isalpha(word[j])&&(k==0||k==3)) {
                    cout<<lower(word[j]);
                }
                else {
                    cout<<word[j];
                    k--;
                }
                j++;
            }
        }
        else if(num[i]=='-'){
            for(k=0;k<4;k++){
                j=reset(j);
                if(isalpha(word[j])&&(k==1||k==3)) {
                    cout<<upper(word[j]);
                }else if(isalpha(word[j])&&(k==0||k==2)) {
                    cout<<lower(word[j]);
                }
                else {
                    cout<<word[j];
                    k--;
                }
                j++;
            }
        }
        else if(num[i]==','){
            for(k=0;k<4;k++){
                j=reset(j);
                if(isalpha(word[j])&&(k==1||k==3)) {
                    cout<<upper(word[j]);
                }else if(isalpha(word[j])&&(k==0||k==2)) {
                    cout<<lower(word[j]);
                }
                else {
                    cout<<word[j];
                    k--;
                }
                j++;
            }
        }
    }
}
void Decode(vector <char> code){
    
}
int main(){
    getline(cin,word);
    string x;
    vector <char> num;
    vector <char> code;
    int i;
    while(getline(cin,x)){
        if(x[0]=='E'){
            for(i=2;i<x.size();i++){
                num.push_back(x[i]);
            }
            Encode(num);
            cout<<endl;
        }
        else if(x[0]=='D'){
            for(i=2;i<x.size();i++){
                code.push_back(x[i]);
            }
            Decode(code);
            cout<<endl;
        }
        num.clear();
        code.clear();
    }
}