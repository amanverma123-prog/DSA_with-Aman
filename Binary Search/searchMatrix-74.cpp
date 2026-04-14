#include <iostream>
#include <vector>
using namespace std;
// Better --> TC = O(nlongm), SC = O(1)
// bool searchMatrix(vector<vector<int>> &matrix, int target){
//     int n = matrix.size();
//     int m = matrix[0].size();
//     for (int i = 0; i < n; i++)    {
//         int low = 0, high = m - 1;
//         if (matrix[i][0] <= target && matrix[i][m - 1] >= target){
//             while (low <= high){
//                 int mid = (low + high) / 2;
//                 if (matrix[i][mid] < target)
//                     low = mid + 1;
//                 else if (matrix[i][mid] > target)
//                     high = mid - 1;
//                 else
//                     return true;
//             }
//         }
//         else
//             continue;
//     }
//     return false;
// }

// Optimal --> TC = O(log(n*m)), SC = O(1)
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int low = 0, high = n * m - 1;
    while (low <= high){
        int mid = (low + high) / 2;
        int row = mid / m;
        int col = mid % m;
        if (matrix[row][col] == target)
            return true;
        else if (matrix[row][col] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return false;
}
int main()
{
    vector<vector<int>> arr = {
        {3, 4, 7, 9},
        {12, 13, 16, 19},
        {20, 21, 23, 29}};
    int target = 16;
    cout << searchMatrix(arr, target);
    return 0;
}