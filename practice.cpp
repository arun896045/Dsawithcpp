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
int main(){
//find duplicate and missing value in the given array;
vector<vector<int>>vec={{1,2,3},{4,5,6},{7,9,9}}; 
unordered_set<int>s;
int n=vec.size();
int a,b;
bool flag=true;
int actualsum=0,axpected=0;

for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
      actualsum+=vec[i][j];
      if(s.find(vec[i][j])!=s.end()){
          a=vec[i][j];
          flag=false;
      }
      s.insert(vec[i][j]);
   }
}
if(flag){
   cout<<"There is no any  duplicate value is occured"<<endl;
}

axpected=(n*n)*((n*n)+1)/2;
b=axpected+a-actualsum;
cout<<"missing value:"<<b<<endl;
cout<<"duplicate value:"<<a<<endl;
 return 0;
}