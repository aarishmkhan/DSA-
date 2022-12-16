//recursion tree: https://medium.com/launch-school/recursive-fibonnaci-method-explained-d82215c5498e

#include <bits/stdc++.h>
using namespace std;

int fibo(int n){

    if(n == 0 || n == 1){
        return n;
    }
    return fibo(n-1) + fibo(n-2);

}

int main(){

    int n;
    cin >> n;
    cout << fibo(n);
    
    return 0;
}