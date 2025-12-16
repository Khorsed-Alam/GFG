#include<iostream>
using namespace std;

int bin_dec(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%10) + 2* bin_dec(n/10);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<bin_dec(n);
    return 0;
}b