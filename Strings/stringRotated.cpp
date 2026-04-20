#include<iostream>
using namespace std;
bool isRotated(string& s1, string& s2) {
        int n = s1.size(); 
        if(n != s2.size())
            return false;
        if(n < 2)
            return s1 == s2;
            
        string clock = s1.substr(n-2) + s1.substr(0, n-2);
        string antiClock = s1.substr(2) + s1.substr(0,2); 
            
        return (clock == s2 || antiClock == s2);
    }
int main(){
    string s1 = "leetcode", s2 = "etcodele";
    cout<<isRotated(s1,s2);
    return 0;
}