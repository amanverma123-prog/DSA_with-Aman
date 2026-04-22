#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isVowel(char ch){
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
string sortVowels(string s){
    vector<char> vowels;
    for (char ch : s){
        if (isVowel(ch)){
            vowels.push_back(ch);
        }
    }
    sort(vowels.begin(), vowels.end());
    int j = 0;
    for (int i = 0; i < s.size(); i++){
        if (isVowel(s[i])){
            s[i] = vowels[j++];
        }
    }
    return s;
}
int main(){
    string s1 = "leetcode";
    cout << sortVowels(s1);
    return 0;
}