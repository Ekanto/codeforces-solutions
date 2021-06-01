#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    char str[101];
    int l,i,up=0,low=0;
    cin >> str;
    l = strlen(str);
    for(int i=0;i<l;++i){
        if(isupper(str[i])) up++;
        else{
            low++;
        }
    }
    if(low > up){
 
    for(int i=0;i<l;++i){
        putchar(tolower(str[i]));
 
        }
    }
 
    else if (up > low){
        for(int i=0;i<l;++i){
        putchar(toupper(str[i]));
 
        }
    }
 
    else if (up == low){
         for(int i=0;i<l;++i){
        putchar(tolower(str[i]));
        }
    }
 
}