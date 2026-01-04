#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 3, 5, 6, 7};
    cout<<"Original value at index 1: "<<v1[1]<<endl;
    v1[1]=1000;
    cout<<"Updated value at index i: "<<v1[1]<<endl;
    return 0;
    
}