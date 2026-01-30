#include<iostream>
#include<vector>
using namespace std;
void subset(vector<int>&arr,vector<int>&vec,int i){
    if(i==arr.size()){
        for(int val:vec){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }
    vec.push_back(arr[i]);
    subset(arr,vec,i+1);
    vec.pop_back();
    subset(arr,vec,i+1);

}
int main(){
    vector<int>arr={1,2,3,4,5,6,7};
    vector<int>vec;
    subset(arr,vec,0);
    return 0;
}