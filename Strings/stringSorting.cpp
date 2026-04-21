#include<iostream>
#include<map>
using namespace std;
int sortString(string s){
    map<int, int> mp;
    for(char ch : s){
        mp[ch] = 1; 
    }
    return mp.size();
}
int main(){
    string s = "eabcabd";
    cout<<sortString(s);
    return 0;
}