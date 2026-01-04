#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);

    for(int val: v1){
        cout<<val<<" ";
    }
    cout<<endl;

    v1.insert(v1.begin() +1, 100);
    for(int val: v1){
        cout<<val<<" ";
    }
    cout<<endl;

    v1.insert(v1.end()-1, 200);
    for(int val: v1){
        cout<<val<<" ";
    }
    return 0;
}