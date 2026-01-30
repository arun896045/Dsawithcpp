#include<iostream>
#include<vector>
#include<set>
using namespace std;
int  main(){
    vector<int>vec={-2,-1,-1,1,1,2,2};
    vector<vector<int>>v;
    int n=vec.size();
    for(int i=0;i<n;i++){
        if(i>0&&vec[i]==vec[i-1]) continue;
        for(int j=i+1;j<n;j++){
            int p=j+1, q=n-1;
            while(p<q){
            long long sum=vec[i]+vec[j]+vec[p]+vec[q];
            if(sum>0){
                q--;  
            }else if(sum<0){
                p++;
            }else if(sum==0){
                v.push_back({vec[i],vec[j],vec[p],vec[q]});
                p++,q--;
                while(p<q&&vec[p]==vec[p-1]){
                    p++;
                }
          
        }
       

    }
     
        while(j<n&&vec[j]==vec[j+1]){
            j++;
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