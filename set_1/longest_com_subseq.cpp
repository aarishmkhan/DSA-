#include <bits/stdc++.h>
using namespace std;

int length_common(string &str1, string &str2, int m, int n){

    if(m == 0 || n == 0){
        return 0;
    }

    int take_it = length_common(str1, str2, m-1, n-1);
    int leave_2 = length_common(str1, str2, m-1, n);
    int leave_1 = length_common(str1, str2, m, n-1);

    if(str1[m-1] == str2[n-1]){
        return take_it + 1;
    }
    else return max(leave_2, leave_1);



}

int main(){

    string str1, str2;
    cin >> str1 >> str2;

    int m = str1.length();
    int n = str2.length();

    cout << length_common(str1, str2, m, n);

    return 0;
}