#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt1(0),cnt2(0);
    cin >> n;
    char arr[n];
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i] == '1') cnt1++;
        if(arr[i] == '0') cnt2++;
    }
    cout << abs(cnt2 - cnt1);
    
}