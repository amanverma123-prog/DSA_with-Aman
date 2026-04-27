#include<iostream>
#include<map>
#include<vector>
using namespace std;
// bool isAnagram(string& s, string& t){
//     if(s.size() != t.size()) return false;
//     map<char,int> mp;
//     for(int i = 0;i<s.size();i++){
//         mp[s[i]]++;
//     }
//     for(int i = 0;i<t.size();i++){
//         mp[t[i]]--;
//         if(mp[t[i]] < 0) return false;
//     }
//     return true;
// }
// Optimal --> TC = O(n), SC = O(1)
bool isAnagram(string& s, string& t){
    vector<int> freq(26,0);
    for(int i = 0;i<s.size();i++){
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }
    for(int x : freq){
        if(x != 0) return false;
    }
    return true;
}
int main(){
    string s = "anagram";
    string t = "nagaram";
    cout<<isAnagram(s, t);
    return 0;
}