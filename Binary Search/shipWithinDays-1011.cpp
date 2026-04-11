#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// TC = O(nlogn(sum(weights))), SC = O(1)
int maxWeight(vector<int>& a) {
    int n = a.size();
    int maxi = INT_MIN;
    for (auto v : a) {
        if (v > maxi)
            maxi = v;
    }
    return maxi;
}
int sumOfWeights(vector<int>& a) {
    int sum = 0;
    for (auto v : a) {
        sum += v;
    }
    return sum;
}
int capacity(vector<int>& a, int val) {
    int n = a.size();
    int sum = 0, dayReq = 1;
    for (int i = 0; i < n; i++) {
        if (sum + a[i] > val) {
            dayReq++;
            sum = a[i];
        } else {
            sum += a[i];
        }
    }
    return dayReq;
}
int shipWithinDays(vector<int>& weights, int days) {
    int low = maxWeight(weights);
    int high = sumOfWeights(weights);
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int x = capacity(weights, mid);
        if (x <= days)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}
int main(){
    vector<int> arr = {3,2,2,4,1,4};
    int days = 3;
    cout<<shipWithinDays(arr, days);
    return 0;
}