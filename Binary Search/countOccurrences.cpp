#include<iostream>
#include<vector>
using namespace std;
// TC = O(logn), SC = O(1)
int searchRange(vector<int> &a, int target) {
    int n = a.size();
    int low = 0, high = n-1;
    int first = -1;
    // first occurence (ceil)
    while(low <= high){
        int mid = low + (high - low)/2;
        if(a[mid] >= target){
            if(a[mid] == target) first = mid;
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }
    if(first == -1) return 0;
    low = 0, high = n-1;
    int last = -1;
    // last occurence (floor)
    while(low <= high){
        int mid = low + (high - low)/2;
        if(a[mid] <= target){
            if(a[mid] == target) last = mid;
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }
    return (last - first + 1);
}

int main(){
    vector<int> arr = {5,5,5,5,5,5};
    int x = 5;
    cout<<searchRange(arr, x);
    return 0;
}