#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s1={1,2,4,5,6};
    for(auto x: s1){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}