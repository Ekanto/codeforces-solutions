#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,i,cnt = 0;
    char arr[50];
    cin >> n;
    cin >> arr;
 
    for(int i=0;i<n-1;++i){
        if(arr[i] == arr[i+1]) cnt++;
    }
    cout  << cnt;
    return 0;
 
}