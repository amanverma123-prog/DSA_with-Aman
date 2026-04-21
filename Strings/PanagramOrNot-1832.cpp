#include<iostream>
#include<set>
#include<vector>
using namespace std;
// TC = O(n), SC = O(1)

// Using sets
// bool panagramOrNot(string sentence){
//     int n = sentence.size();
//     if(n < 26) return false;
    
//     set<char> st;
//     for(char ch : sentence){
//         if(isalpha(ch)){
//             st.insert(tolower(ch));
//             }
//         }  
//     return st.size() == 26;
// }

// Another approach --> Best (using vectors)
// TC = O(n), SC = O(1)
bool panagramOrNot(string sentence){
    int n = sentence.size();
    if(n < 26) return false;

    vector<bool> seen(26, false);
    for(char ch : sentence){
        if(isalpha(ch)){
            seen[tolower(ch) - 'a'] = true;
        }
    }
    for(int i = 0;i<26;i++){
        if(seen[i] == false)
            return false;
    }
    return true;
}
int main(){
    string s = "thequickbrownfoxjumpsoverthelazydog";
    cout<<panagramOrNot(s);
    return 0;
}