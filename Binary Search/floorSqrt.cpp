#include<iostream>
using namespace std;
int sqrt(int n){
    int low = 1, high = n;
    while(low <= high){
        long long mid = low + (high - low)/2;
        long long val = mid*mid;
        if(val <= n)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return high;
}
int main(){
    int n = 28;
    cout<<sqrt(n);
    return 0;
}