#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>deq={ 10,30,50,60};

    cout<<"First element is: "<<deq.front()<<endl;
    cout<<"Last element is: "<<deq.back();

    return 0;
}