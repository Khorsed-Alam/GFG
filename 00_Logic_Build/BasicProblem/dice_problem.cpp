#include<iostream>
using namespace std;

void dice(int n){
    int op_of_dice;
    if(n==1){
        op_of_dice=6;
    }else if(n==2){
        op_of_dice=5;
    }else if(n==3){
        op_of_dice=4;
    }else if(n==4){
        op_of_dice=3;
    }else if(n==5){
        op_of_dice=2;
    }else{
        op_of_dice=1;
    }
    cout<<op_of_dice;
}
int main(){
    int n;
    cin>>n;
    dice(n);
    return 0;
}