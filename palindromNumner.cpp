#include<iostream>
using namespace std;
bool revers(int x){
 int copy =x;
 int revers=0;
 while(x!=0){
   int r=x%10;
   revers=revers*10+10;
   x=x/10;
 }
 return revers==copy;
}
int main(){
    int x;
    cout<<"Enter the palindrome number:";
    cin>>x;

   if(revers(x)){
    cout<<"This is the palindrome";
   }else{
    cout<<"This is not Palindrome";
   }
    return 0;
}