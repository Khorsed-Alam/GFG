#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,3> arr;
    arr.fill(1);
    for(auto val: arr){
        cout<<val<<" ";
    }
    return 0;
}