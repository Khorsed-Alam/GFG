#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(vector<int> &a, vector<int> &b){
    return a[1]<b[1];
}

int activitySelection(vector<int>& start,vector<int> &end){
    vector<vector<int>> arr;
    int n= start.size();

    for(int i=0;i<n;i++){
        arr.push_back({start[i],end[i]});
    }

    sort(arr.begin(),arr.end(),compare);

    int count=1;

    int j=0;

    for(int i=0;i<n;i++){
        if(arr[i][0]>arr[j][1]){
            count++;
            j=i;
        }
    }
    return count;
}

int main(){
    vector<int>start={1,3,0,5,8,5};
    vector<int>end={2,4,6,7,9,9};
    cout<<activitySelection(start,end);
    return 0;
}