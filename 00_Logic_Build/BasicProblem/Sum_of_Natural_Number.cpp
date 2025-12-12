#include<iostream>
using namespace std;
void sum_of_natural_number(int n){

    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
}
int main(){
    int n;
    cin>>n;
    sum_of_natural_number(n);
    return 0;
}