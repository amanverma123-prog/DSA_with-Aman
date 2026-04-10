#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxVal(vector<int>& a, int n){
    int maxi = INT_MIN;
    for(auto val : a){
        if(val > maxi)
            maxi = val;
    }
    return maxi;
}
int divisor(vector<int>& a, int val){
    int ans = 0;
    for(auto v : a){
        ans += (v + val - 1) / val;
    }
    return ans;
}
int smallestDivisor(vector<int>& nums, int threshold) {
    int n = nums.size();
    int low = 1, high = maxVal(nums, n);
    while(low <= high){
        int mid = low + (high - low)/2;
        int x = divisor(nums, mid);
        if(x <= threshold)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}
int main(){
    vector<int> arr = {1,2,5,9};
    int threshold = 6;
    cout<<smallestDivisor(arr,threshold);
    return 0;
}