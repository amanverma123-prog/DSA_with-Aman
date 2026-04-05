#include<iostream>
#include<vector>
using namespace std;
// TC = O(log n) avg, O(n) worst, SC = O(1)
int findMin(vector<int> a, int n){
    int low = 0, high = n-1;
    while (low < high){
        int mid = low + (high - low)/2;
        if(a[low] == a[mid] && a[mid] == a[high]){
            low += 1;
            high -= 1;
            continue;
        }
        if(a[mid] > a[high])
            low = mid + 1;
        else
            high = mid;
    } 
    return a[low];
}
int main(){
    vector<int> arr = {2,2,2,0,1};
    int n = arr.size();
    cout<<findMin(arr, n);
    return 0;
}