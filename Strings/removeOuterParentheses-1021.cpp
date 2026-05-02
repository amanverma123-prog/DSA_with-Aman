#include<iostream>
using namespace std;
// TC = O(n), SC = O(n)
string removeOuterParentheses(string& s){
    string res = "";
    int depth = 0;
    for(char ch : s){
        if(ch == '('){
            if(depth > 0)
                res += ch;
            depth++;
        }
         else{
            if(depth > 1)
                res += ch;
            depth--;
        }
    }
    return res;
}
int main(){
    string s = "(()())(())";
    cout<<removeOuterParentheses(s);
    return 0;
}