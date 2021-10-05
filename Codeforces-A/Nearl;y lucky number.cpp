#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    char str[20];
    int cnt = 0;
    cin >> str;
    int l = strlen(str);
    for(int i = 0;i<=l-1;++i){
        if(str[i] == '4' || str[i] == '7') cnt++;
    } 
    if((cnt == 7) || (cnt == 4)) cout << "YES" << endl;
    else{
         cout << "NO" << endl;
    }
}