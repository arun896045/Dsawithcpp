#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
void combination(vector<int>&arr,vector<int>&ans,vector<vector<int>>&mat,int i,int tgt){
    if(i==3||tgt<0){ 
        return;
    }
    if(tgt==0){
        mat.push_back({ans});
        return ;
    }
    ans.push_back(arr[i]);
 combination(arr,ans,mat,i+1,tgt-arr[i]);
 combination(arr,ans,mat,i,tgt-arr[i]);
 ans.pop_back();
 combination(arr,ans,mat,i+1,tgt);

};
int main(){
    vector<int>arr={2,3,5};
    vector<vector<int>>mat;
    vector<int>ans;
    int tgt=8;
    combination(arr,ans,mat,0,tgt);
    for(auto val:mat){
        for(int el:val){
            cout<<el<<" ";
        }
        cout<<endl;
    }
    return 0;
}