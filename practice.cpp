#include<iostream>
#include<vector>
#include<stack>
#include<map>
#include<set>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
using namespace std;
void getallsubject(vector<int>&vec,vector<int>&ans,vector<vector<int>>&subset,int i,int n){
  if(i==vec.size()){
    subset.push_back(ans);
    return;
  }
     ans.push_back(i);
     getallsubject(vec,ans,subset,i+1,n);
     ans.pop_back();
     int idx=i+1;
     while(idx<vec.size()&&vec[i]==vec[i+1]) i++;
     getallsubject(vec,ans,subset,i+1,n);
     
}
int main(){
  vector<int>vec={1,2,2};
  int n=vec.size();
  vector<int >ans;
  vector<vector<int>>subset;
  getallsubject(vec,ans,subset,0,n);
  for(vector<int>val:subset){
    for(int i=0;i<val.size();i++){
      cout<<val[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}