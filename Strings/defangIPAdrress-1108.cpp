#include<iostream>
using namespace std;
string defangIPaddr(string s){
    int i = 0;
    string ans = "";
    for(char ch : s){
        if(ch == '.'){
            ans += "[.]";
        } else{
            ans += ch;
        }
    }
    return ans;
}
int main(){
    string s = "1.1.1.1";
    cout<<defangIPaddr(s);
    return 0;
}