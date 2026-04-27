#include<iostream>
using namespace std;
// Brute Force --> TC = O(n*n), SC = O(1)
// bool rotateString(string& s, string& goal){
//     int n = s.size();
//     if(n == 1 && s == goal) return true;
//     for(int i = 0;i<n;i++){
//         char temp = s[0];
//         for(int j = 0;j<n-1;j++){
//             s[j] = s[j+1];
//         }
//         s[n-1] = temp;
//         if(s == goal)
//             return true;
//     }
//     return false;
// }
// Optimal --> TC = O(n), SC = O(1)
bool rotateString(string& s, string& goal){
    if(s.size() != goal.size())
        return false;
    return ((s+s).find(goal) != string::npos);
}
int main(){
    string s = "abcde";
    string goal = "cdeab";
    cout<<rotateString(s, goal);
    return 0;
}