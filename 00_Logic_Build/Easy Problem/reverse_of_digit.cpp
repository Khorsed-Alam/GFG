#include<iostream>
using namespace std;
void reversedigit(int n){
    while(n!=0){
        int last= n%10;
        cout<<last;

        n/=10;
    }
}
int main(){
    int n;
    cin>>n;
    reversedigit(n);
    return 0;
}