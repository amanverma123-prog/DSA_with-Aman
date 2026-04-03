#include<iostream>
#include<vector>
using namespace std;
// TC = O(logn), SC = O(1)
vector<int> searchRange(vector<int> &a, int target) {
    int n = a.size();
    int low = 0, high = n-1;
    vector<int> ans = {-1,-1};
    // first occurence (ceil)
    while(low <= high){
        int mid = low + (high - low)/2;
        if(a[mid] >= target){
            if(a[mid] == target) ans[0] = mid;
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }
    low = 0, high = n-1;
    // last occurence (floor)
    while(low <= high){
        int mid = low + (high - low)/2;
        if(a[mid] <= target){
            if(a[mid] == target) ans[1] = mid;
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {5,7,7,8,8,10};
    int x = 8;
    vector<int> res = searchRange(arr, x);
    for(auto val : res){
        cout<<val<<" ";
    }
    return 0;
}