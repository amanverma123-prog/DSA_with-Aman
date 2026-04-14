#include<iostream>
#include<vector>
using namespace std;
// TC = O(nlogm), SC = O(1)
int lowerBound(vector<int> &nums, int x){
    int n = nums.size();
    int ans = n;
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(nums[mid] >= x){
            ans = mid;
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }
    return ans;
} 
int rowWithMax1s(vector < vector < int >> & mat) {
    int n = mat.size();
    int m = mat[0].size();
    int maxC = 0, idx = -1;
    for(int i = 0;i<n;i++){
        int count = m - lowerBound(mat[i], 1);
        if(count > maxC){
            maxC = count;
            idx = i;
        }
    }
        return idx;
    }
int main(){
    vector<vector<int>> arr = {
        {1,1,1},
        {0,0,1},
        {0,0,0}
    };
    cout<<rowWithMax1s(arr);
    return 0;
}