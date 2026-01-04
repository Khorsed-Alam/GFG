#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    vector<int> vec1(3, 5); // vector with 3 elements, all = 5

    for (int x : vec1) {
        cout << x << " ";
    }
    cout<<endl;

    vector<int> v2={1,3,4,6,7};
    for(int x:v2){
        cout<<x<<" ";
    }

    return 0;
}
