#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    string st;
    cin >> st;
    set <char> myset;
 
    myset.insert(st.begin(),st.end());
 
    int size = myset.size();
 
    if(size%2 != 0 ) cout << "IGNORE HIM!";
 
    else{
        cout << "CHAT WITH HER!";
    }
}