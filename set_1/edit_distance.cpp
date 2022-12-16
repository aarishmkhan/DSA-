#include <bits/stdc++.h>
using namespace std;

int min(int x, int y, int z){
    return min(min(x,y), z);
}

int min_edit_dis(string &str1, string &str2, int m, int n){

    if(m == 0){
        return n;
    }
    if(n == 0){
        return m;
    }
    
    
    if(str1[m-1] == str2[n-1]){
        return min_edit_dis(str1, str2, m-1, n-1);
    }
    return 1 + min(min_edit_dis(str1, str2, m, n-1), min_edit_dis(str1, str2, m-1, n), min_edit_dis(str1, str2, m-1, n-1));


}

int main(){

    string str1, str2;
    cin >> str1 >> str2;

    int m = str1.length();
    int n = str2.length();

    cout << min_edit_dis(str1, str2, m, n);


    return 0; 
}