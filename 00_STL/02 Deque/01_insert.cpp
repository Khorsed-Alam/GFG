#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int main(){
    deque<int>de={10,40,6,300};
    for(int val: de){
        cout<<val<< " ";

    }
    cout<<endl;

    de.push_back(1000);
    for(int val: de){
        cout<<val<<" ";
    }
    cout<<endl;

    de.push_front(2000);
    for(int val: de){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;

}