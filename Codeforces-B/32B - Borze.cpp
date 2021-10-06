#include<bits/stdc++.h>

using namespace std;

int main(){
    char str[201];
    cin >> str;
    int l = strlen(str);
    for(int i = 0;i<l;++i){
        if(str[i] == '.'){
            cout << "0";
            
        }
        else if ((str[i] == '-') && (str[i+1] == '.'))
        {
            cout << "1";
            i++;
            
        }
        else if ((str[i] == '-') && (str[i+1] == '-'))
        {
            cout << "2";
            i++;
            
        }
    }
    cout << "\n";
}