#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Sort based on value/weight ratio (descending)
bool compare(vector<double> &a, vector<double> &b) {
    return a[2] > b[2];
}

// Recursive function
double knapsack(vector<vector<double>> &items, int capacity, int i) {

    // Base case
    if (i == items.size() || capacity == 0)
        return 0;

    // Take full item
    if (items[i][1] <= capacity) {
        return items[i][0] + knapsack(items, capacity - items[i][1], i + 1);
    }
    // Take fraction
    else {
        return items[i][2] * capacity;
    }
}

int main() {
    vector<int> val = {60, 100, 120};
    vector<int> wt  = {10, 20, 30};
    int capacity = 50;

    vector<vector<double>> items;

    // Store value, weight, ratio
    for (int i = 0; i < val.size(); i++) {
        items.push_back({(double)val[i], (double)wt[i], (double)val[i] / wt[i]});
    }

    // Sort using sort()
    sort(items.begin(), items.end(), compare);

    cout << knapsack(items, capacity, 0);
    return 0;
}
