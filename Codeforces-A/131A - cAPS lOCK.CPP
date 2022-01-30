#include<bits/stdc++.h>

using namespace std;

int main(){
    char ch[101];
    int low(0), high(0);
    cin >> ch;
    int l=strlen(ch);
    for(int i=0;i<l;++i){
        if(islower(ch[i])) low++;
        if(isupper(ch[i])) high++;
    }
    if(islower(ch[0]) && low==1){
        ch[0] = ch[0]-32;
        for(int i=1;i<l;++i){
            ch[i] = ch[i]+32;
        }
    }
    if((!low)){
        for(int i=0;i<l;++i){
            ch[i] = ch[i]+32;
        }

    }
    
    for(int i=0;i<l;++i){
        cout << ch[i];

    }
}