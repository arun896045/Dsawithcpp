#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
    int arr[5]={5,2,11,7,12};
    unordered_map<int ,int> m;
    vector<int>vec;
    int tgt=9;
     for(int i=0;i<sizeof(arr);i++){
        int first=arr[i];
        int sec=tgt-first;
        if(m.find(sec)!=m.end()){
           vec.push_back(i);
           vec.push_back(m[sec]);
           break;
        }
        m[first]=i;
     }
     for(int val:vec){
        cout<<" "<<val;
     }
    
    return 0;
}
//This is the two pointer approach
// int main(){
//  vector<int>vec={5,2,11,7,9};
//  sort(vec.begin(), vec.end());
//  int tgt=9;
//  auto it=vec.begin();
//  auto itt=vec.end()-1;
  
// while(it<itt){
//     if((*it)+(*itt)==tgt){
//         cout<<(it-vec.begin())<<"  "<<(itt-vec.begin());
//          break;
//     }else if((*it)+(*itt)>tgt){
//         itt--;
//     }else{
//         it++;
//     }
// }
//  return 0;
// }