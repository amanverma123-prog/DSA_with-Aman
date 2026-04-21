#include<iostream>
#include<vector>
using namespace std;
// TC = O(n), SC = O(1)
string sortString(string s){
    vector<int> count(26,0);
    for(int i = 0;i<s.size();i++){
        count[s[i] - 'a']++;
    }
    int x = 0;
    for(int i = 0;i<26;i++){
        char ch = i + 'a';
        while(count[i] > 0){
            s[x] = ch;
            x++;
            count[i]--;
        }
    }
    return s;
}
int main(){
    string s = "eabcabd";
    cout<<sortString(s);
    return 0;
}