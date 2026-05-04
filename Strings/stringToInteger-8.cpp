#include<iostream>
#include<climits>
using namespace std;
int myAtoi(string& s){
    int i = 0, n = s.size();
    while(i<n && s[i] == ' '){ // leading spaces
        i++;
    }
    int sign = 1; // checks sign ('+', '-')
    if(i<n && s[i] == '-' || s[i] == '+'){
        sign = (s[i] == '+') ? 1 : -1;
        i++;
    }
    int res = 0;
    while(i<n && isdigit(s[i])){
        int digit = s[i] - '0';
        // overflow case
        if(res > (INT_MAX - digit)/10){
            if(sign == 1)
                return INT_MAX;
            else    
                return INT_MIN;
        }
        res = res*10 + digit;
        i++;
    }
    return sign*res;
}
int main(){
    string s = "+1";
    cout<<myAtoi(s);
    return 0;
}