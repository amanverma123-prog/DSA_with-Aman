#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string frequencySort(string& s){
    vector<int> freq(256,0);
    for(char ch : s){
        freq[ch]++;
    }
    vector<pair<int, char>>v;
    for(int i = 0;i<256;i++){
        if(freq[i] > 0){
            v.push_back({freq[i], char(i)});
        }
    }
    sort(v.rbegin(), v.rend());
    string res = "";
    for(auto &p : v){
        res += string(p.first, p.second);
    }
    return res;
}
int main(){
    string s = "tree";
    cout<<frequencySort(s);
    return 0;
}