#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
 vector<int>vec={5,2,11,7,9};
 sort(vec.begin(), vec.end());
 int tgt=9;
 auto it=vec.begin();
 auto itt=vec.end()-1;
  
while(it<itt){
    if((*it)+(*itt)==tgt){
        cout<<(it-vec.begin())<<"  "<<(itt-vec.begin());
         break;
    }else if((*it)+(*itt)>tgt){
        itt--;
    }else{
        it++;
    }
}
 return 0;
}