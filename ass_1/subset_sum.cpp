#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;


bool subset_sum(ll arr[], ll p, ll n){

    if(n == 0){
        return true;
    }
    if(p == 0){
        return false;
    }
    
    bool take_it = subset_sum(arr, p-1, n-arr[p-1]);
    bool leave_it = subset_sum(arr, p-1, n);

    return take_it || leave_it;

}

int main()
{
    ll t;
    cin >> t;

    while(t--){
        ll n, p;
        cin >> n;
        cin >> p;
        ll arr[p];
        for(ll i = 0; i < p; i++){
          cin >> arr[i];
        }

        if (subset_sum(arr, p, n) == true){
            cout << "YES\n"; 
        } else cout << "NO\n";
    }
    
    return 0;
}







