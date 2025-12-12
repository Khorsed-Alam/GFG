#include<iostream>
using namespace std;
void digit_sum(int n){
    int sum=0;
    while(n!=0){
        int last=n%10;
        sum+=last;

        n/=10;
    }
    cout<<sum;
}
int main(){
    int n;
    cin>>n;
    digit_sum(n);
    return 0;
}