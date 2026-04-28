#include<iostream>
#include<vector>
using namespace std;
// Optimal --> TC = O(n*m), SC = O(1)
string longestCommonPrefix(vector<string>& strs){
    for(int i = 0;i<strs[0].size();i++){  // n = length of shortest strings
        char ch = strs[0][i];
        for(int j = 1;j<strs.size();j++){  // // m = no. of strings
            if(i >= strs[j].size() || strs[j][i] != ch)
                return strs[0].substr(0,i);
        }
    }
    return strs[0];
}
int main(){
    vector<string> str = {"flower","flow","flight"};
    cout<<longestCommonPrefix(str);
    return 0;
}