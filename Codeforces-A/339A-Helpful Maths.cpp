#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int l =s.length();
    for(int i=0;i<l-2;++i){
        for(int j=0;j<l-2-i;++j){
            if(s[j] > s[j+2]){
            swap(s[j],s[j+2]);
        }
        }
    }
    cout << s;
 
}