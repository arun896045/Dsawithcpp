#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>vec={-1,0,1,2,-1,4};
set<vector<int>>s;

int n=vec.size();
for(int i=0;i<n;i++){ 
    int tgt=-vec[i];
    set<int>set;
    for(int j=0;j<n;j++){
        int third=tgt-vec[j];
        if(set.find(third)!=set.end()){
           vector<int>trip={vec[i],vec[j],third};
            sort(trip.begin(),trip.end());
            s.insert(trip);
        }
        set.insert(vec[j]);
    }

}
for(vector<int>val:s){
   for(int i=0;i<val.size();i++){
    cout<<val[i]<<" ";
   }
   cout<<endl;
}
    return 0;
}