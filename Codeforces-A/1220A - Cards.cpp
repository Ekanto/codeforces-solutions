#include<iostream>

using namespace std;

int main(){
    int t,cnt(0),cnt2(0);
    cin >> t;
    char str[t];
    int num[1000];
    cin >> str;
    for(int i=0;i<t;++i){
        if(str[i] == 'n'){
            cnt++;
        }
        if(str[i] == 'z'){
            
            cnt2++;
        }
    }
    for(int i=0;i<cnt;++i){
        cout << 1 << " ";
    }
    for(int i=0;i<cnt2;++i){
        cout << 0 <<" ";
    }
    
}