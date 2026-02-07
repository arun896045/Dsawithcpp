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
          j++;
        }else{
            temp.push_back(arr[i]);
            count+=(mid-i+1);
            i++;
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
int mergeSort(vector<int>&arr,int st,int end){ 
   
     if(st<end){
        int mid=st+(end-st)/2;
      int leftCount=mergeSort(arr,st,mid);
      int rightCount=mergeSort(arr,mid+1,end);
    int mcount= merge(arr,st,mid,end);
       return leftCount+rightCount+mcount;
    }
    
return 0;
}
int main(){
    vector<int>arr={6,3,5,2,7};
   int n=arr.size();
  int count=  mergeSort(arr,0,n-1);
  cout<<"the numner of count:"<<count;
    return 0;
}