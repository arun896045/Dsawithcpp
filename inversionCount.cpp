#include<iostream>
#include<vector>
using namespace std;
int merge(vector<int>&arr,int st,int mid,int end){
    vector<int>temp;
    int i=st;
    int j=mid+1;
    int count=0;
    while(i<=mid&&j<=end){
        if(arr[i]>arr[j]){
            temp.push_back(arr[j]);
            i++;
        }else{
            temp.push_back(arr[i]);
            count+=(mid-i+1);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
   for(int idx=0;idx<temp.size();idx++){
    arr[idx+st]=temp[idx];
   }
   return count;
}
int mergesort(vector<int>&arr,int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;
       int leftInVcount= mergesort(arr,st,mid);
      int rightIvVcount=mergesort(arr,mid+1,end);
       int invCount=merge(arr,st,mid,end);
       return leftInVcount+rightIvVcount+invCount;

    }
    return 0;
}
int main(){
    // vector<int>arr={6,3,5,2,7};
    vector<int>arr={1,3,5,10,2,6,8,9};
    int n=arr.size();
    int ans =mergesort(arr,0,n);
    cout<<"invertion count  "<<ans<<endl;
    return 0;
}