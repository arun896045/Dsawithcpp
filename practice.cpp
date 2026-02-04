#include<iostream>
#include<vector>
#include<stack>
#include<map>
#include<set>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
using namespace std;
bool isSafe(vector<vector<char>>&mat,int row,int n,int c){
  //for right direction
  for( int i=c;i<n;i++){
    if(mat[row][i]=='Q'){
      return false;
    }
  }

  //for upword direction
  for( int r= row;r>=0;r--){
    if(mat[r][c]=='Q'){
      return false;
    }
  }

  for(int r=row,i=c;r>=0&&i>=0;r--,i--){
    if(mat[r][i]=='Q'){
      return false;
    }
  }
  for(int r=row,i=c;r>=0&&i<n;r--,i++){
    if(mat[r][i]=='Q'){
      return false;
    }
  }
  return true;
}
void placedqueen(vector<vector<char>>&mat,int row,int n){
    if(row == n){
        for(auto r : mat){
            for(char c : r){
                cout << c << " ";    
            }
             cout << endl;
        }
          
        return;   
    }
  for(int i=0;i<n;i++){
    if(isSafe(mat,row,n,i)){
      mat[row][i]='Q';
      placedqueen(mat,row+1,n);
      mat[row][i]='o';
    };
  
  }
}
int main(){
  //nqueen problem solve
 vector<vector<char>>mat ={{'o','o','o','o'},
                            {'o','o','o','o'},
                            {'o','o','o','o'},
                            {'o','o','o','o'},                   
                             };
  int n=mat.size();   
 placedqueen(mat,0,n);  
  }

