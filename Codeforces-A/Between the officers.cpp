#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,flag;
    cin >> n;
    char str[n]; 
    cin >> str;
    int l = strlen(str);
    for(int i = 1;i<=l;++i){
        if(str[0] == 'S' && str[l-1] == 'F') flag = 1;
        else{
            flag = 2;
        }    
    }
 
    if(flag == 1) cout << "YES";
    if(flag == 2) cout << "NO";  
}