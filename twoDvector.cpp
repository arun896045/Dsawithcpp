#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row=3,col=3;
vector<vector<int>>matric={{1,2,3},{4,5,6,4,5,6,7,8,9},{7,8,9}};
for(int i=0;i<matric.size();i++){
    for(int j=0;j<matric[i].size();j++){
        cout<<"  "<<matric[i][j];
    }
    cout<<endl;
}
return 0;
}