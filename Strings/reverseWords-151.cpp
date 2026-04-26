#include<iostream>
#include<vector>
using namespace std;
// TC = O(n), SC = (n)
string reverseWords(string s) {
    vector<string> words;
    string temp = "";
    for (char c : s) {
        if (c == ' ') {
            if (!temp.empty()) {
                words.push_back(temp);
                temp = "";
            }
        } else {
            temp += c;
        }
    } 
    if (temp != "")
        words.push_back(temp);

    string res = "";
    for (int i = words.size() - 1; i >= 0; i--) {
        res += words[i];
        if (i != 0)
            res += " ";
    }
        
    return res;
}
int main(){
    string s = "hello world";
    cout<<reverseWords(s);
    return 0;
}