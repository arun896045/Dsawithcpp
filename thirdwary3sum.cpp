#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    vector<int>vec={-1,0,1,2,-1,-4};
    sort(vec.begin(),vec.end());
    
    int n=vec.size();
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
    if(i>0&&vec[i]==vec[i-1]) continue;
        int j=i+1, k=n-1;
        while(j<k){
           int sum=vec[i]+vec[j]+vec[k];
           if(sum>0){
            k--;
           }
           else if(sum<0)
           {
            j++;
           }
           else if(sum==0){
               v.push_back({vec[i],vec[j],vec[k]});
               j++;
               k--;
               while(j<k&&vec[j]==vec[j-1]){
                j++;
               }
              
           }
        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
         cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}