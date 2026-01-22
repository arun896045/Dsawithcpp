#include<iostream>
#include<vector>
using namespace std;
int maxsum(int matrix[][3],int row,int col){
    int Maxsum=INT32_MIN;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=matrix[j][i];
        }
        Maxsum=max(Maxsum,sum);
    }
    return Maxsum;
}
int main(){
int matrix[3][3]={9,2,9,4,5,6,7,8,1};
int row=3;
int col=3;

  cout<<maxsum(matrix,row,col);
    return 0;
}