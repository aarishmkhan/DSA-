#include <bits/stdc++.h>
using namespace std;


void reverseString(string &str, int i = 0){

    int n = str.length();
    if(i == n/2){
        return;
    }
    swap(str[i], str[n-i-1]);
    reverseString(str, i+1);
}

int main(){

    string str, str1;
    cin >> str;
    str1 = str;
    reverseString(str);
    cout << str << endl;

    if(str == str1){
        cout << "It is a palindrome";
    }


    return 0;
}