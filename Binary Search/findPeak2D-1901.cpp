#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// TC = O(nlogm)
int maxEle(vector<vector<int>> &a, int n, int col){
    int maxi = INT_MIN;
    int ans = -1;
    for (int i = 0; i < n; i++){
        if (a[i][col] > maxi){
            maxi = a[i][col];
            ans = i;
        }
    }
    return ans;
}
vector<int> findPeakGrid(vector<vector<int>> &mat){
    int n = mat.size();
    int m = mat[0].size();
    int low = 0, high = m - 1;
    while (low <= high){
        int mid = (low + high) / 2;
        int row = maxEle(mat, n, mid);
        int left = (mid - 1) >= 0 ? mat[row][mid - 1] : INT_MIN;
        int right = (mid + 1) < m ? mat[row][mid + 1] : INT_MIN;
        if (mat[row][mid] > left && mat[row][mid] > right){
            return {row, mid};
        } else if (mat[row][mid] < left){
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }
    return {-1, -1};
}
int main()
{
    vector<vector<int>> arr = {
        {2, 5, 1, 5},
        {4, 6, 3, 2},
        {1, 4, 1, 5}
    };
    vector<int> res = findPeakGrid(arr);
    for(auto v : res){
        cout<<v<<" ";
    }
    return 0;
}