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
void Decode(vector <char> Decode){
    int i,j,k,l=0;
    vector <int> check;
    vector <char> code;
    vector <int> x[12]={{2,2,2,2},{2,2,2,1},{2,2,1,2},{2,2,1,1},{2,1,2,2},{2,1,2,1},{2,1,1,2},{2,1,1,1},{1,2,2,2},{1,2,2,1},{1,2,1,2},{1,2,1,1}};
    for(i=0;i<Decode.size();i++){
        if(isalpha(Decode[i])){
            code.push_back(Decode[i]);
        }
    }
    for(i=0;i<code.size();i++){
        check.clear();
        check.resize(4);
        for(j=0;j<4;j++){
            if(isupper(code[l])){
                check[j]=2;
            }
            else if(islower(code[l])){
                check[j]=1;
            }
            else{
                j--;
            }
            l++;
        }
        if(check==x[0]){
            cout<<0;
        }
        else if(check==x[1]){
            cout<<1;
        }
        else if(check==x[2]){
            cout<<2;
        }
        else if(check==x[3]){
            cout<<3;
        }
        else if(check==x[4]){
            cout<<4;
        }
        else if(check==x[5]){
            cout<<5;
        }
        else if(check==x[6]){
            cout<<6;
        }
        else if(check==x[7]){
            cout<<7;
        }
        else if(check==x[8]){
            cout<<8;
        }
        else if(check==x[9]){
            cout<<9;
        }
        else if(check==x[10]){
            cout<<'-';
        }
        else if(check==x[11]){
            cout<<',';
        }
        i=l;
    }
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