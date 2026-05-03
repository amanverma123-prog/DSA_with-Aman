#include<iostream>
using namespace std;
int maxDepth(string& s){
    int maxDepth = 0;
    int depth = 0;
    for(char ch : s){
        if(ch == '('){
            depth++;
            maxDepth = max(maxDepth, depth);
        }
        else if(ch == ')'){
            depth--;
        }
    }
    return maxDepth;
}
int main(){
    string s = "(1+(2*3)+((8)/4))+1";
    cout<<maxDepth(s);
    return 0;
}