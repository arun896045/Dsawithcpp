#include<iostream>
#include<vector>
#include<set>
#include <algorithm>
using namespace std;
int main(){
  vector<int>vec={-1,0,1,2,-1,-4};
  vector<vector<int>>ans;
  set<vector<int>>s;
  int n=vec.size();
  for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
        for(int k=j+1;k<n;j++){
          if(vec[i]+vec[j]+vec[k]==0){
          vector<int>trip={vec[i],vec[j],vec[k]};
           sort(trip.begin(),trip.end());
           if(s.find(trip)==s.end()){
            cout<<"this is the open";
            s.insert(trip);
            ans.push_back(trip);
           }
          }
        }
    }
  }
 
 
    return 0;
}