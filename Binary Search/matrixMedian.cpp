#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// TC = O(log(10^9) X nlogn(m))
int countSmallerEqual(vector<vector<int>> &mat, int n, int m, int x){
    int count = 0;
    for (int i = 0; i < n; i++){
        count += upper_bound(mat[i].begin(), mat[i].end(), x) - mat[i].begin();
    }
    return count;
}
int findMedian(vector<vector<int>> &matrix){
    int n = matrix.size();
    int m = matrix[0].size();

    int low = INT_MAX;
    int high = INT_MIN;
    for (int i = 0; i < n; i++){
        low = min(low, matrix[i][0]);
        high = max(high, matrix[i][m - 1]);
    }
    int req = (n * m) / 2;
    while (low <= high){
        int mid = low + (high - low) / 2;
        int smallerEqual = countSmallerEqual(matrix, n, m, mid);
        if (smallerEqual <= req)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}
int main(){
    vector<vector<int>> matrix = {
        {1, 5, 7, 9, 11},
        {2, 3, 4, 5, 10},
        {9, 10, 12, 14, 16}};
    
    cout<<findMedian(matrix);
    return 0;
}