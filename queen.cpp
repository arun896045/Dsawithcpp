#include<iostream>
#include<vector>
using namespace std;
bool isShafe(vector<vector<string>>vec,int row,int j,int n){
    for(j;j<n;j++){
         vec[row][j]=="Q";
         return false;
    }
    for(row;row<n;row++){
        vec[row][j]=="Q";
        return false;
    }
    for(int r=row,c=j;r>=0&&c>=0;r--,c--){
        vec[r][j]=="Q";
    }


}
void queen(vector<vector<string>>&vec,vector<string>&arr,int n,int row){
    if(row==n)
          return;
    for(int j=0;j<n;j++){
        if(isShafe(vec,row,j,n)){
            vec[row][j]="Q";
            queen(vec,arr,n,row+1);
            vec[row][j]="O";
        }
    }
}
int main(){
    vector<vector<string>>vec;
    vector<string>arr(4,"o");
    int n=arr.size();
    queen(vec,arr,n,0);
    return 0;
}