#include<iostream>
#include<vector>
using namespace std;
// Brute force --> TC = O(n), SC = O(1)
// int findKthPositive(vector<int>& a, int k) {
//     for (int i = 0; i < a.size(); i++) {
//         if (a[i] < k)
//             k++;
//         else 
//             break;
//     }
//     return k;
// }

// Optimal --> TC = O(logn), SC = O(1)
int findKthPositive(vector<int>& arr, int k) {
    int low = 0, high = arr.size() - 1;
    int missing = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        missing = arr[mid] - (mid + 1);
        if (missing < k)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return (low + k);
}
int main(){
    vector<int> arr = {2,3,4,7,11};
    int k = 5;
    cout<<findKthPositive(arr, k);
    return 0;
}