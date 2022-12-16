//quite similar to subset_sum problem
#include <bits/stdc++.h>
using namespace std;

int change(int den[], int amt, int n){

    if(amt == 0){
        return 1;
    }
    if(n <= 0 || amt < 0){
        return 0;
    }

    int take_it = change(den, amt - den[n-1], n);
    int leave_it = change(den, amt, n-1);

    return take_it + leave_it;
}

int main(){

    int n;
    cin >> n;
    int den[n];
    for(int i = 0; i < n; i++){
        cin >> den[i];
    }
    int amt;
    cin >> amt;

    cout << change(den, amt, n);

    return 0;
}