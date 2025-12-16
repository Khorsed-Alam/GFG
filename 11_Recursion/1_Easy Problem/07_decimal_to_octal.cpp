#include<iostream>
using namespace std;
int  dectooct(int n){
    if(n==0){
        return 0;
    }else{
        return (n%8)+ 10*dectooct(n/8);
    }
}
int main(){
    int n;
    cin>>n;
  cout<<  dectooct(n);
    return 0;
}