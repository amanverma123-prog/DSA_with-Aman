#include<iostream>
#include<set>
using namespace std;
bool panagramOrNot(string sentence){
    int n = sentence.size();
    if(n < 26) return false;

    set<char> st;
    for(char ch : sentence){
        if(isalpha(ch)){
            st.insert(tolower(ch));
        }
    }

    return st.size() == 26;
}
int main(){
    string s = "thequickbrownfoxjumpsoverthelazydog";
    cout<<panagramOrNot(s);
    return 0;
}