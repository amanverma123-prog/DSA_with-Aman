#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

// TC = O(nlogn(max - min + 1))

bool possible(vector<int>& a, int m, int k, int val){
    int count = 0, bouquet = 0;
    for(int v : a){
        if(v <= val){
            count++;
        } else{
            bouquet += count/k;
            count = 0;
        }
    }
    bouquet += count/k;
    return bouquet >= m;
}
int minDays(vector<int>& a, int m, int k){
    int n = a.size();
    if(n < m*k) return -1;

    int mini = INT_MAX;
    int maxi = INT_MIN;

    for(int i = 0;i<n;i++){
        mini = min(mini, a[i]);
        maxi = max(maxi, a[i]);
    }

    int low = mini;
    int high = maxi;
    int ans = high;

    while (low <= high){
        int mid = low + (high - low)/2;
        bool x = possible(a, m ,k, mid);

        if(x){
            ans = mid;
            high = mid - 1;
        } else
            low = mid + 1;
    }
    return ans;
}
int main(){
    vector<int> arr = {7,7,7,7,13,11,12,7};
    int m = 2, k = 3;
    cout<<minDays(arr, m ,k);
    return 0;
}