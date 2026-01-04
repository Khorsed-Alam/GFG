#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> vc={'d','r','q'};
    for(char val: vc){
        cout<<val<<" ";
    }
    vc.pop_back();
    for(char val: vc){
        cout<<val<<" ";
    }
    return 0;
}