#include<iostream>
using namespace std;
int main(){
    int size=9;
    int arr[]={1,2,3,4,5,6,7,8,9};
    int st=0;
    int tsk=9;
    int end=size-1;
    
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==tsk) cout<<mid;
        if(arr[mid]>tsk){
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    
    return 0;
}
