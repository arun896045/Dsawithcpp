#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int>vec={9,4,20,3,10,5,18};
    int n=vec.size();
    int task=33;
    vector<int>pre(n,0);
    
    
     pre[0]=vec[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+vec[i];
    }
    int count=0;
   unordered_map<int,int>m;
    for(int j=0;j<n;j++){
     int  val=pre[j]-task;

       if(val==0){
        count++;
       }
       if(m.find(val)==m.end()){
          m[pre[j]]=1; 
       }
       m[pre[j]]++;
        if(m.find(val)!=m.end()){
        count+=m[pre[j]];
       }
      
      
    }
    cout<<count<<endl;
    return 0;
}