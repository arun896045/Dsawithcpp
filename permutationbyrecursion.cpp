#include<iostream>
#include<vector>
using namespace std;
void getpermutation(vector<int>&vec,vector<vector<int>>&ans,int n,int idx){
    if(idx==n){
     ans.push_back({vec});
        return;
    }
    for(int i=idx;i<n;i++){
        swap(vec[i],vec[idx]);
        getpermutation(vec,ans,n,idx+1);
        swap(vec[i],vec[idx]);
    }

}
int main(){
    vector<int >vec={1,2,3};
    vector<vector<int>>ans;
    int n=vec.size();
    getpermutation(vec,ans,n,0);
    for(vector<int>val:ans){
        for(int el:val){
            cout<<el<<" ";
        }
        cout<<endl;
    }
    return 0;
}