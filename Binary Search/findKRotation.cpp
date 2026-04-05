#include<iostream>
#include<vector>
using namespace std;
// TC = O(logn), SC = O(1)
int findMin(vector<int> a, int n){
    int low = 0, high = n-1;
    while (low < high){
        int mid = low + (high - low)/2;
        if(a[mid] > a[high])
            low = mid + 1;
        else
            high = mid;
    } 
    return low;
}
int main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    int n = arr.size();
    cout<<findMin(arr, n);
    return 0;
}