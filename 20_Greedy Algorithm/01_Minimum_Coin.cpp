#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minCoin(vector<int> & coins,int amount){
    int n=coins.size();
    sort(coins.begin(),coins.end());
    int res=0;

    for(int i=n-1 ;i>=0;i--){
        if(amount>=coins[i]){
            int count= (amount/coins[i]);
            res+=count;

            amount-=(count* coins[i]);
        }
        if(amount==0){
            break;
        }
    }
    return res;
}

int main(){
    vector<int> coins={5,2,10,1};
    int amount;
    cin>>amount;
    cout<<minCoin(coins,amount);
    return 0;
}