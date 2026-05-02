#include<iostream>
#include<unordered_map>
using namespace std;
// brute Force --> TC = O(n), SC = O(1)
// bool isIsomorphic(string& s, string& t){
//     unordered_map<char,char> mp; // SC = O(256) {0-9, a-z, A-Z, special characters}
//     unordered_map<char,char> mp2; // SC = O(256)

//     int i = 0;
//     while(i < s.size()){ // TC = O(n)
//         if(mp.find(s[i]) != mp.end()){ // TC = O(256)
//             if(mp[s[i]] != t[i])
//                 return false;
//         }if(mp2.find(t[i]) != mp2.end()){ // TC = O(256)
//             if(mp2[t[i]] != s[i])
//                 return false;
//         }
//         mp[s[i]] = t[i];
//         mp2[t[i]] = s[i];
//         i++;
//     }
//     return true;
// }

// Optimal --> TC = O(n), SC = O(1)
bool isIsomorphic(string& s, string& t){
    int m1[256] = {0};
    int m2[256] = {0};

    for(int i = 0;i<s.size();i++){
        if(m1[s[i]] != m2[t[i]])
            return false;
        
        m1[s[i]] = i+1;
        m2[t[i]] = i+1;
    }
    return true;
}
int main(){
    string s = "paper";
    string t = "title";
    cout<<isIsomorphic(s, t);
    return 0;
}