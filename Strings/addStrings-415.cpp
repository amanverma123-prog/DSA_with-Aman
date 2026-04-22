#include<iostream>
#include<algorithm>
using namespace std;
// string addString(string n1, string n2){
//     int x = n1.size()-1;
//     int y = n2.size()-1;
//     int carry = 0;
//     int sum = 0;
//     string ans = "";
//     while(x >= 0 && y >=0){
//         sum = n1[x] - '0' + n2[y] - '0' + carry;
//         carry = sum/10;
//         ans += '0' + sum%10;
//         x--; y--; 
//     }
//     while(x >= 0){
//         sum = n1[x] - '0' + carry;
//         carry = sum/10;
//         ans += '0' + sum%10;
//         x--;
//     }
//     while(y >= 0){
//         sum = n2[y] - '0' + carry;
//         carry = sum/10;
//         ans += '0' + sum%10;
//         y--;
//     }
//     if(carry)
//         ans += '0' + carry;
//     reverse(ans.begin(), ans.end());
//     return ans;
// }

// Cleaner Approach
string addString(string n1, string n2){
    int x = n1.size()-1;
    int y = n2.size()-1;
    int carry = 0;
    string ans = "";
    while(x >= 0 || y >= 0 || carry){
    int sum = carry;

    if(x >= 0) sum += n1[x--] - '0';
    if(y >= 0) sum += n2[y--] - '0';

    ans += (sum % 10) + '0';
    carry = sum / 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    string n1 = "2658";
    string n2 = "87";
    cout<<addString(n1,n2);
    return 0;
}