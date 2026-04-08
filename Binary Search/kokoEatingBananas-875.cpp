#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
// TC = O(nlogh)
int findMaxElement(vector<int>& a) {
    int max = INT_MIN;
    for (auto v : a) {
        if (v > max)
            max = v;
    }
    return max;
}
long long totalHours(vector<int>& a, int mid) {
    long long totalH = 0;
    for (int i = 0; i < a.size(); i++) {
        totalH += (a[i] + mid - 1) / mid;
    }
    return totalH;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1;
    int high = findMaxElement(piles);

    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long totalH = totalHours(piles, mid);
        if (totalH <= h) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low;
}
int main(){
    vector<int> arr = {3,6,7,11};
    int h = 8;
    cout<<minEatingSpeed(arr, h);
    return 0;
}