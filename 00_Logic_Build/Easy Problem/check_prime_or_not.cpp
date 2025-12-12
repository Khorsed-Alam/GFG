#include<iostream>
using namespace std;

void check_prime(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout<<"Prime nember";
            break;
        }else{
            cout<<"Not Prime Number";
            break;
        }
    }
}
int main(){
    int n;
    cin>>n;
    check_prime(n);
    return 0;
}