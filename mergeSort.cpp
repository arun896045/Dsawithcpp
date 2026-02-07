#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr,int st,int mid,int end){
    int j=mid+1;
    int i=st;
    vector<int>temp;
    while(i<=mid&&j<=end){
         if(arr[i]>arr[j]){
            temp.push_back({arr[i]});
            i++;
         }
         else{
            temp.push_back({arr[j]});
            j++;
         }
         
    }
    while(i<=mid){
        temp.push_back({arr[i]});
        i++;
    }
    while(j<=end){
        temp.push_back({arr[j]});
        j++;
    }
    for(int idx=0;idx<temp.size();idx++){ 
        arr[idx+st]=temp[idx];
    }
}
void mergeSort(vector<int>&arr,int st,int end){
    if(st<end){
    int mid=st+(end-st)/2;
    mergeSort(arr,st,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,st,mid,end);
    }
}
int main(){
    vector<int>arr={8,1,2,3,6,5,4,7};
   int n=arr.size();
    mergeSort(arr,0,n-1);
    for(int el:arr){
        cout<<el<<" ";
    }
    return 0;
}