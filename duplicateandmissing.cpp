#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>vec={{1,2,3},{4,9,6},{7,8,9}};
    int n=vec.size();
    unordered_set<int>s;
    vector<int>ans;
     int expected=0;
     int actual=0;
    int a,b;
    for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        actual+=vec[i][j];
        if(s.find(vec[i][j])!=s.end()){
            a=vec[i][j];
        }
        s.insert(vec[i][j]);
     }
} 
expected=(n*n)*(n*n+1)/2;
b=expected+a-actual; 
cout<<a<<" "<<b<<endl;
return 0;
}