#include<iostream>
#include<unordered_map>
using namespace std;
// Tc = O(n) , SC = O(1)
int romanToInt(string s) {
        unordered_map<char, int> val = {{'I', 1},   {'V', 5},   {'X', 10},
                {'L', 50},  {'C', 100}, {'D', 500},
                {'M', 1000}};

        int ans = 0;
        int prev = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            int curr = val[s[i]];

            if (curr >= prev) {
                ans += curr;
            } else {
                ans -= curr;
            }
            prev = curr;
        }
        return ans;
    }
int main(){
    string s = "MCMXCIV";
    cout<<romanToInt(s);
    return 0;
}