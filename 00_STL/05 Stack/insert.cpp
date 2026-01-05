#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);

    

    cout<<"Top element of stack: "<<st.top()<<endl;

    st.pop();
    cout<<"Top element of stack: "<<st.top()<<endl;

    return 0;

 
}