#include<iostream>
#include<algorithm>
using namespace std;
bool palindromeOrNot(string str){
    int st = 0, end = str.size()-1;
    while(st < end){
        if(str[st] != str[end])
            return false;
        st++;
        end--;
    }
    return true;
}
int main(){
    string str = "madam";
    cout<<palindromeOrNot(str);
    return 0;
}