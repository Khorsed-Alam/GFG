#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> deq={ 1,4,5,6};
    cout<<deq.size()<<endl;
    deq.clear();
    cout<<deq.size();
}