#include<iostream>
#include<vector>
using namespace std;
int isPivote(vector<int>&arr,int st,int end){
   
   int j=st;
   int idx=st-1;
    for(j;j<end;j++){
        if(arr[j]<arr[end]){
            idx++;
            swap(arr[idx],arr[j]);
        }
    }

    idx++;
    swap(arr[idx],arr[end]);
    return idx;

}
void quickSort(vector<int>&arr,int st,int end){
   
    if(st<end){
    int idx=isPivote(arr,st,end);
    quickSort(arr,st,idx-1);
    quickSort(arr,idx+1,end);
    }
}
int main(){
    vector<int>arr={8,7,6,5,4,3,2,1};
    int n=arr.size();
    quickSort(arr,0,n-1);
  for(int val:arr){
    cout<<val<<" ";
  }
  cout<<endl;
    return 0;
}