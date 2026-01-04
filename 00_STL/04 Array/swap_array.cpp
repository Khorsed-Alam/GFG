#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,3> n={10,40,50};
    array<int,3> b={90,80,70};

    n.swap(b);
    for(auto x: n){
        cout<<x<<" ";
    }
 cout<<endl;
    for(auto x: b){
        cout<<x <<" ";
    }
}