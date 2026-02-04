#include<iostream>
#include<vector>
#include <typeinfo>
using namespace std;
bool isSafe(vector<vector<char>>&vec,int n,int r,int c,char ctr){
     for(int i=0;i<n;i++){
        if(vec[r][i]==ctr){
            return false;
        }
    }

    for(int i=0;i<n;i++){
        if(vec[i][c]==ctr){
            return false;
        }
    }
    int row=(r/3)*3;
    int col=(c/3)*3; 
    for(int i=row;i<=row+2;i++){
        for(int j=col;j<=col+2;j++){
            if(vec[i][j]==ctr){
              return false;
            }
        }
    }
    return true;
};
bool sudoku(vector<vector<char>>&vec,int n,int row,int col){
    int nextrow=row,nextcol=col+1;
    if(nextrow==9){
       
        return  true;
    }
     if(nextcol==9){
    nextrow=row+1;
    nextcol=0;
   }
   if(vec[row][col]!='.'){
        return sudoku(vec,n,nextrow,nextcol);
   }
  
for(char i='1';i<='9';i++){
    if(isSafe(vec,n,row,col,i)){
        vec[row][col]=i;
       
        if(sudoku(vec,n,nextrow,nextcol)){
            return true;
        } 
        vec[row][col]='.';
    }
}
return false;
}
int main(){
 vector<vector<char>>mat={{'2','.','.','.','.','1','4','.','.'},
                          {'7','.','.','.','9','.','.','.','.'},
                          {'.','3','.','.','5','6','.','.','2'},
                          {'.','7','.','2','1','8','5','.','6'},
                          {'1','.','2','.','.','5','9','3','.'},
                          {'.','6','.','.','.','9','.','.','.'},
                          {'6','.','.','.','8','.','.','.','.'},
                          {'9','.','.','5','.','3','8','.','.'},
                          {'4','1','8','.','2','.','.','6','5'},
                                                              };
 int n=mat.size();

 if(sudoku(mat,n,0,0)){
    for(auto val:mat){
        for(char el:val){
            cout<<el<<" ";
        }
        cout<<endl;
    }
 }                                                         

                                                 
return 0;
}