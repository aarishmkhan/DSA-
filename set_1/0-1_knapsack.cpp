#include <bits/stdc++.h>
using namespace std;

int max(int a, int b){
    if(a > b){
        return a;
    } else return b;
}

int maxval(int val[], int wt[], int W, int n){

    if(n == 0 || W == 0){
        return 0;
    }
    int take_it = maxval(val, wt, W - wt[n-1], n-1) + val[n-1];
    int leave_it = maxval(val, wt, W, n-1);
    if(wt[n-1] > W){
        return leave_it;
    }else return max(take_it, leave_it);
    
}

int main(){

    int n;
    cin >> n;
    int val[n], wt[n], W;
    for(int i = 0; i < n; i++){
        cin >> val[i];
    }
    for(int i = 0; i < n; i++){
        cin >> wt[i];
    }
    cin >> W;

    cout << maxval(val, wt, W, n);

    return 0;
}