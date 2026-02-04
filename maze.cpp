#include<iostream>
#include<vector>
using namespace std;
int maze(vector<vector<int>>&vec,int row,int col,int n){
    if(row==n||col==n){
        return 0;
    }
    if(row==n&&col==n){
        return 1;
    }
   return maze(vec,row+1,col,n) +maze(vec,row,col+1,n);
}
int main(){
 vector<vector<int>>mat={{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
int n =mat.size();
int count=0;
int sum= maze(mat,0,0,n);
cout<<sum<<endl;
 return 0; 
}
