#include<iostream>
#include<deque>
#include<array>
using namespace std;
int main(){
    array<int,5> arr={ 5,6,7,3,6};
    for(auto val: arr){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"First elemnet of array is: "<<arr.front()<<endl;
    cout<<"Last element of array is : "<<arr.back()<<endl;
    cout<<"Element at index 1 is: "<<arr.at(1);
    return 0;
}