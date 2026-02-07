#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ispeli(string str){
    string s2=str;
    reverse(s2.begin(),s2.end());
    return s2==str;
}
void pelindrome(string s,vector<string>& vs,vector<vector<string>>&mat){
    if(s.size()==0){
        mat.push_back(vs);
        return;
    }
    for(int i=0;i<s.length();i++){
        string str=s.substr(0,i);
        if(ispeli(str)){
            vs.push_back(str);
            pelindrome(s.substr(i+1),vs,mat);
            vs.pop_back();
        }


    }
}
int main(){
string s="aaababaababbbad";
vector<string>vs;
vector<vector<string>>mat;
pelindrome(s,vs,mat);
for(auto val:mat){
    for(string el:val){
        cout<<el;
    }
    cout<<endl;
}
    return 0;
}