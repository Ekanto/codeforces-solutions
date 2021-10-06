#include<bits/stdc++.h>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long k2,k3,k5,k6,min1,min2,res1,res2;
    cin >> k2 >> k3 >> k5 >> k6;
    min1 = min({k2,k5,k6});
    res1 = min1 * 256;
    k2 = k2 - min1;
    k5 = k5 - min1;
    k6 = k6 - min1;
    min2 = min(k2,k3);
    res2 = min2 * 32;
    cout << res1 + res2;
    
}