// problems/reverse-string/

//  Write a function that reverses a string. The input string is given as an array of characters s.
// You must do this by modifying the input array in-place with O(1) extra memory.

// Example :
// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]

#include<iostream>
using namespace std;

int main(){
    char s[] = {'h','e','l','l','o'};
    int length = 5;

    int st = 0;
    int e = length - 1;

    while(st < e){
        char temp = s[st];
        s[st] = s[e];
        s[e] = temp;
        st++;
        e--;
    }

    // printing reversed string
    for(int i = 0; i < length; i++){
        cout << s[i];
    }

    return 0;
}