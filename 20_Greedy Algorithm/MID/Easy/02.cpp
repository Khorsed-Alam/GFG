//Minimum cost to make array size 1 by removing larger of pairs


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int cost(vector<int>&arr){
    int n=arr.size();
    int min_val= *min_element(arr.begin(),arr.end());
    return (n-1)* min_val;ca
 
}
 
int main(){
    vector<int>arr={4,3,2};
    cout<<cost(arr)<<endl;
    return 0;
}