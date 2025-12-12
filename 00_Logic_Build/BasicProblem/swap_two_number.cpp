#include<iostream>
using namespace std;
void swap_two(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;

    cout<<a<<" "<<b;
}
int main(){
    int a,b;
    cin>>a>>b;
    swap_two(a,b);
    return 0;
}