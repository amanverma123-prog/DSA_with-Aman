#include<iostream>
#include<vector>
using namespace std;
// TC = O(logn), SC = O(1)
int lowerBound(vector<int>& a, int x){
    int n = a.size();
    int ans = n;
    int low = 0, high = n-1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(a[mid] >= x){
            ans = mid;
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {1,2,3,3,5,8,8,10,10,11};
    int n = arr.size();
    int x = 7;
    // int lowerBound = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
    // cout<<lowerBound;
    cout<<lowerBound(arr, x);
    return 0;
}