#include<iostream>
#include<vector>
using namespace std;
bool  searchvalue(vector<vector<int>>mat,int tsk,int mid,int n){
    int st=0;
    int end=n-1;
    while(st<=end){
        int mid1=st+(end-st)/2;
        if(mat[mid][mid1]==tsk){
            return true;
        }else if(mat[mid][mid1]>tsk){
            end=mid1-1;
        }else{
            st=mid1+1;
        }
    }
}
int main(){
    vector<vector<int>>mat={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    int tsk=3;
    int st=0;
    int end=n-1;
   
while(st<=end){
    int mid =st+(end-st)/2;
    if(tsk>=mat[mid][0]&&tsk<=mat[mid][n-1]){
         cout<<searchvalue(mat,tsk,mid,n);
         break;
    }else if(tsk>mat[mid][n-1]){
        st=mid+1;
    }else{
        end=mid-1;
    }
}
    return 0;
}