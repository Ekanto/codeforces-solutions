#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2;
    int flag(0);
    cin >> s1;

    for(int i = 1;i<=5;++i){
        cin >> s2;
        if((s1[0] == s2[0] || s1[1] == s2[1])){
            flag++;
            break;
        }
    }
    if(flag) cout << "YES" << "\n";
    if(!flag) cout << "NO" << "\n";    
}