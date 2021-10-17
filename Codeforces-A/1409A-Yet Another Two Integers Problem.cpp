#include<bits/stdc++.h>
 
#define nl "\n"
#define ll long long 
 
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,res(0),rem(0),t;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a == b){
            cout << 0 << nl;
            
        }
        else{
            cout << (abs(a-b)+9) / 10 << nl;
        }
    }
}