#include<iostream>
using namespace std;
    // return 1 if == m
    // return 0 if < m
    // return 2 if > m
int power(int mid, int n, int m){
    long long ans = 1;
    for(int i = 0;i<n;i++){
        ans = ans * mid;
        if(ans > m) return 2;
    }
    if(ans == m) return 1;
    return 0;
}
int nthRoot(int N, int M){
    int low = 1, high = M;
    while(low <= high){
        int mid = low + (high - low)/2;
        int val = power(mid, N, M);
        if(val == 1) return mid;
        else if(val == 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
// TC = O(logm * logn)
int main(){
    int N = 3, M = 27;
    cout<<nthRoot(N, M);
    return 0;
}