#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,p1,p2,p3,p4;
    cin >> t;
    while(t--){
        cin >> p1 >> p2 >> p3 >> p4;
        int MAX1 = max(p1,p2); //5
        int MAX2 = max(p3,p4); // 9
        int MIN1 = min(p1,p2); // 4
        int MIN2 = min(p3,p4); // 6

        if((MAX1 < MIN2) || (MAX2 < MIN1)) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }
}