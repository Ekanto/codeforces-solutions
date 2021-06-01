#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    set <int> s;
    int a,b,x,y;
    int n;
    cin >> n;
    cin >> a;
    for(int i = 1;i<=a;++i){
        cin >> x;
        s.insert(x);
    }
 
    cin >> b;
    for(int i = 1;i<=b;++i){
        cin >> y;
        s.insert(y);
    }
 
    if(s.size() == n) cout << "I become the guy." << "\n";
    else{
        cout << "Oh, my keyboard!" << "\n";
    }
}