#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
// Better Approach --> TC = O(n), O(n)
// string removeStars(string& s){
//     stack<char> st; // SC = O(n)
//     for(char ch : s){ // TC = O(n)
//         if(st.empty() && ch == '*'){
//             continue;
//         }
//         if(ch == '*')
//             st.pop();
//         else
//             st.push(ch);
//     }
//     string res = "";
//     while(!st.empty()){
//         res += st.top();
//         st.pop();
//     }
//     reverse(res.begin(), res.end());
//     return res;
// }

// Optimal --> TC = O(n), SC = O(1)
string removeStars(string& s){
    int i = 0;
    for(int j = 0;j<s.size();j++){
        if(s[j] == '*'){
            if(i > 0) i--;
        }
        else
            s[i++] = s[j];
    }
    return s.substr(0,i);
}
int main(){
    string s = "leet**cod*e";
    cout<<removeStars(s);
    return 0;
}