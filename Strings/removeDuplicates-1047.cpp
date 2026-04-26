#include<iostream>
using namespace std;
// TC = O(n), SC = O(n)
string removeDuplicates(string s) {
    string res = "";
    for(int i = 0;i<s.size();i++){
        if(res.size() == 0){
            res.push_back(s[i]);
            continue;
        }
        if(s[i] == res.back())
            res.pop_back();
        else
            res.push_back(s[i]);
    }
    return res;
}
int main(){
    string s = "abbaca";
    cout<<removeDuplicates(s);
    return 0;
}