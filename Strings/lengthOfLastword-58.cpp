#include<iostream>
using namespace std;
int lengthOfLastWord(string s) {
    int count = 0;
    int sz = s.size()-1;
    
    while(sz >= 0 && s[sz] == ' '){
        sz--;
    }

    while(sz >= 0 && isalpha(s[sz])){
        count++;
        sz--;
    }
    return count;
}
int main(){
    string s = "   fly me   to   the moon  ";
    cout<<lengthOfLastWord(s);
    return 0;
}