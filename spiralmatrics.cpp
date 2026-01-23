#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>mat={
    {1,2,3},
    {5,6,7},
    {9,10,11},
    };
    int n=3;
   int sr=0;
   int sc=0;
   int er=n;
   int ec=n;
   int sum=0;
   while(sr<=er){
   for(int i=sc;i<ec;i++){
      sum+=mat[sr][i];
   }
   for(int i=sr+1;i<er;i++){
    sum+=mat[i][ec-1];
   }
   for(int i=ec-2;i>=sc;i--){
    sum+=mat[er-1][i];
   }
   for(int i=er-2;i>sr;i--){
    sum+=mat[i][sc];
   }
   sr+=1;
   sc+=1;
   ec-=1;
   er-=1;
}
   cout<<sum;
    return 0;
}