#include<bits/stdc++.h>

#define nl "\n"

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,a,b;
    cin >> t;
    while(t--){
        cin >> a >>b;

        if(a==b) cout << 0 << nl;

        if (a>b)
        {
            if((a-b)%2 == 0){
                cout << 1 <<nl;
            }
            else if((a-b)%2!=0){
                cout << 2 << nl;

            }
            
        }

        else if (a<b)
        {
            if((b-a)%2 == 0){
                cout << 2 << nl;
            }
            else if((b-a)%2!=0){
                cout << 1 << nl;
            }
        }
        
    }
}