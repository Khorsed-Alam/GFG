#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s={1,4,5};
    s.insert(100);

    for(auto X: s){
        cout<<X<<" ";
    }
    cout<<endl;
    return 0;
}