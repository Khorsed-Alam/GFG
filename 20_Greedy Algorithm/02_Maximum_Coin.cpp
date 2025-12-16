#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void MaxCoin(vector<int> & coins,int amount){
    int n=coins.size();
    sort(coins.begin(),coins.end());
    int res=0;

    for(int i=0;i<n;i++){
        if(amount>=coins[i]){
            int count= amount/coins[i];
            res +=count;
            amount-= count*coins[i];

            cout<<"Coins "<<coins[i]<<" Used "<<count<<" Times"<<endl;

        }
    }
   // return res;
   
}
int main(){
    vector<int> coins= {5,10,20,50,2,1};
    int amount;
    cin>>amount;
    MaxCoin(coins,amount);
    return 0;
}