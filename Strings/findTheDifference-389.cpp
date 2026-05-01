#include<iostream>
#include<unordered_map>
using namespace std;
// Brute Force --> TC = O(n), SC = O(1)
// char findTheDifference(string& s, string& t) {
//     unordered_map<char, int> mp;
//     for(char c : t){
//         mp[c]++;
//     }
//     for(char c : s){
//         mp[c]--;
//     }
//     for(auto p : mp){
//         if(p.second > 0)
//             return p.first;
//     }
//     return '\0';
// }

// Optimal --> TC = O(n), SC = O(1)
char findTheDifference(string& s, string& t){
    char ans = 0;
    for(char c : s){
        ans ^= c;
    }
    for(char c : t){
        ans ^= c;
    }
    return ans;
}
int main(){
    string s = "abcd";
    string t = "abcde";
    cout<<findTheDifference(s,t);
    return 0;
}