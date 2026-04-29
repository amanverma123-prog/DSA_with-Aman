#include<iostream>
using namespace std;
// TC = O(n), SC = O(1)
string largestOddNumber(string& num) {
    for(int i = num.size()-1;i>=0;i--){
        int x = num[i] - '0';
        if(x%2 != 0)
            return num.substr(0,(i+1));
    }
    return "";
}
int main(){
    string s = "4652";
    cout<<largestOddNumber(s);
    return 0;
}