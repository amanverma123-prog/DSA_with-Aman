#include<iostream>
#include<vector>
using namespace std;
// TC = O(logn), SC = O(1)
int singleNonDuplicate(vector<int> a, int n){
    if(n == 1) return a[0];
    if(a[0] != a[1]) return a[0];
    if(a[n-1] != a[n-2]) return a[n-1];
    int low = 1, high = n-2;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(a[mid-1] != a[mid] && a[mid] != a[mid+1])
            return a[mid];
        if((mid % 2 == 1 && a[mid] == a[mid-1]) || 
           (mid % 2 == 0 && a[mid] == a[mid+1]))
            low = mid + 1;
        else 
            high = mid - 1;
    }
    return -1;
}
int main(){
    vector<int> arr = {1,1,2,2,3,3,4,5,5};
    int n = arr.size();
    cout<<singleNonDuplicate(arr, n);
    return 0;
}