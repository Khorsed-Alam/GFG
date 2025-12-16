#include<iostream>
using namespace std;
int dec_hex(int n){
    if(n==0){
        return 0;
    }else{
        return (n % 16) + 10 * dec_hex(n / 16);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<dec_hex(n);
    return 0;
}