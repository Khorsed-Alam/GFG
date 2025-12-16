#include<iostream>
using namespace std;
int oct_dec(int n){
    if(n==0){
        return 0;
    }else{
        return(n%10)+8*oct_dec(n/10);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<oct_dec(n);
    return 0;
}