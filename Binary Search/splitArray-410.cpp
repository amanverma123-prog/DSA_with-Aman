#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
int subArrays(vector<int>& a, int val) {
    int subA = 1;
    long long sum = 0;
    for (int i = 0; i < a.size(); i++) {
        if (sum + a[i] <= val) {
            sum += a[i];
        } else {
            subA++;
            sum = a[i];
        }
    }
    return subA;
}
int splitArray(vector<int>& nums, int k) {
    int low = *max_element(nums.begin(), nums.end());
    long long high = accumulate(nums.begin(), nums.end(), 0);
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        int countSubArray = subArrays(nums, mid);
        if (countSubArray > k)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}
int main(){
    vector<int> arr = {7,2,5,10,8};
    int k = 2;
    cout<<splitArray(arr,k);
    return 0;
}