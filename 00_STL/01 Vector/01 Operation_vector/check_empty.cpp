#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    if(v.empty()){
        cout<<"Vector is empty"<<endl;
    }
    v.push_back(100);
    if(!v.empty()){
        cout<<"Vector is not empty. First element is: "<<v[0]<<endl;
    }
    return 0;
}