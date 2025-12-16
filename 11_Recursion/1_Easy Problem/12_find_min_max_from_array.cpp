#include <iostream>
#include <algorithm>
using namespace std;

pair<int,int> findMaxMin(int arr[], int low, int high) {
    if (high == low) {
        return {arr[low], arr[low]};
    }
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            return {arr[high], arr[low]};
        } else {
            return {arr[low], arr[high]};
        }
    }

    int mid = (low + high) / 2;
    pair<int,int> left = findMaxMin(arr, low, mid);
    pair<int,int> right = findMaxMin(arr, mid + 1, high);

    int finalMax = max(left.first, right.first);
    int finalMin = min(left.second, right.second);

    return {finalMax, finalMin};  // Fixed typo here
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    pair<int,int> result = findMaxMin(arr, 0, n - 1);
    cout << "Max value: " << result.first << endl;
    cout << "Min value: " << result.second << endl;

    return 0;
}
