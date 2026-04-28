#include<iostream>
using namespace std;
// Brute Force --> TC = O(logx), SC = (logx)
// bool isPali(int x){
//     string s = to_string(x);
//     int l = 0, r = s.size()-1;
//     while(l<r){
//         if(s[l] != s[r]){
//             return false;
//         }
//         l++;
//         r--;
//     }
//     return true;
// }

// Optimized --> TC = O(logx), SC = O(1)
bool isPali(int x){
    if(x < 0 || (x%10 == 0 && x != 0)) return false;
    int rev = 0;
    while(x > rev){
        rev = rev*10 + x%10;
        x /= 10;
    }
    return (x == rev || x == rev/10);
}
int main(){
    int x = 121;
    cout<<isPali(x);
    return 0;
}