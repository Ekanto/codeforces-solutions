#include<bits/stdc++.h>

#define nl "\n"
#define ll long long 

using namespace std;

int main(){
    ll n,t;
    ll MIN=0;
    cin >> t;
    while(t--){
    cin >> n;
    ll arr[n];
    for(ll i=0;i<n;++i){
        cin >> arr[i];
    }

    sort(arr,arr+n); 

    MIN = abs(arr[0] - arr[1]);
    for(ll i=0;i<n;++i){

        ll res = abs(arr[i] - arr[i+1]);
        if(res < MIN){
            MIN = res;
        }
    }

    cout << MIN << nl;

    }

}