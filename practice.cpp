#include<iostream>
#include<vector>
#include<stack>
#include<map>
#include<set>
using namespace std;
int main(){
 set<int>s;
 s.insert(1);
 s.insert(2);

 
 cout<<*(s.lower_bound(1));
 cout<<endl;

 for(int val:s){
    cout<<val<<" ";
 }
 cout<<endl;
   return 0;
}
