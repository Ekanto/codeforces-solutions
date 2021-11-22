#include<bits/stdc++.h>

#define nl "\n"

using namespace std;

int t,hp,void_a,lstrike,flag;

void game(){
    cin >> hp >> void_a >> lstrike;
    while(hp > 0 && void_a && hp/2+10<hp){
        void_a--;  // 0
        hp = hp/2+10; // 31 
    }
    if(hp<=lstrike*10) cout << "YES" << nl;
    else cout << "NO" << nl;


}

int main(){
    cin >> t;
    while(t--){
        game();
    }
  
    
}