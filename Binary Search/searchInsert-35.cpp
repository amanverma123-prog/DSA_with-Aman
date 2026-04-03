#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int> a, int x){
    int n = a.size();
    int ans = n;
    int low = 0, high = n-1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(a[mid] >= x){
            ans = mid;
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {1,3,5,6};
    int x = 4;
    cout<<searchInsert(arr,x);
    return 0;
}