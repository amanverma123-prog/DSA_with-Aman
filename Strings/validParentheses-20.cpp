#include<iostream>
#include<stack>
using namespace std;
// TC = O(n), SC = O(n)
bool isValid(string& s){
    int n = s.size();
    if(n%2 != 0) return false;

    stack<char> st;
    for(char ch : s){
        if(ch == '(' || ch == '{' || ch == '[')
            st.push(ch);
        
        else{
            if(st.empty()) return false;

            if((ch == ')' && st.top() == '(') ||
            (ch == '}' && st.top() == '{') ||
            (ch == ']' && st.top() == '['))
                st.pop();
            else
                return false;
        }
    }
    return st.empty();
}
int main(){
    string s = "(){}[]";
    cout<<isValid(s);
    return 0;
}