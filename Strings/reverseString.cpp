#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    char str[] = {'h','e','l','l','o'};
    int st = 0, end = sizeof(str)-1;
    while(st < end){
        swap(str[st++],str[end--]);
    }
    for(char c: str){
        cout<<c<<" ";
    }
    return 0;
}