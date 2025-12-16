#include<iostream>
#include<string>
using namespace std;

bool isPalindromeRec(string str,int left,int right){
    if(left>=right){
        return true;
    }if(str[left]!= str[right]){
        return false;
    }
    return isPalindromeRec(str,left+1,right-1);
}
bool isPalindrome(string str){
    return isPalindromeRec(str,0,str.size()-1);
}
int main(){
    string str;
    cin>>str;
    if(isPalindrome(str)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}