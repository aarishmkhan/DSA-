//https://stackoverflow.com/questions/31775604/explanation-for-recursive-implementation-of-josephus-problem

#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int k){

    if(n == 1){
        return 1;
    }
    return ((josephus(n-1, k) + k-1) % n + 1);

}

int main(){

    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){

        int n, k;
        cin >> n >> k;
        cout << "Case " << i << ": " << josephus(n, k) << endl;

    }
    return 0;
    
}
