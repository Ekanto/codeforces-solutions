#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    string remv = "aeiouy";
    cin >> s;
    int l = s.length();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(char c: remv){
        s.erase(remove(s.begin(),s.end(), c),s.end());
    }
    int l2 = s.length();
    for(int i=0;i<l2*2;++i){
        if(i%2==0){
            s.insert(i,".");
        }
    }

    cout << s;  
}