#include<iostream>
#include<vector>
using namespace std;
// TC = O(logn), SC = O(1)
int singleNonDuplicate(vector<int> a, int n){
        if(n == 1)
            return 0;
        if(a[0] > a[1])
            return 0;
        if(a[n-1] > a[n-2])
            return n-1;
        int low = 1, high = n-2;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(a[mid] > a[mid-1] && a[mid] > a[mid+1])
                return mid;
            else if(a[mid] < a[mid+1])
                low = mid + 1;
            else
                high = mid - 1;
        }
    return -1;
}
int main(){
    vector<int> arr = {1,2,1,3,5,6,4};
    int n = arr.size();
    cout<<singleNonDuplicate(arr, n);
    return 0;
}