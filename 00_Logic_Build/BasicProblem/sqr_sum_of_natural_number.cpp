#include<iostream>
using namespace std;
void sqr_sum_of_natural_number(int n){
    int sum=0;
    for(int i=0;i<=n ;i++){
        sum+=(i*i);
    }
    cout<<sum;
}
int main(){
    int n;
    cin>>n;
    sqr_sum_of_natural_number(n);
    return 0;
}