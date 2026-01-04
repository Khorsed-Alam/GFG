#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>deq={1,4,5,6,7};
    for(int val: deq){
        cout<<val<<" ";

    }
    cout<<endl;

    deq.pop_back();
     for(int val: deq){
        cout<<val<<" ";

    }
    cout<<endl;

        deq.pop_front();
     for(int val: deq){
        cout<<val<<" ";

    }
    cout<<endl;


}