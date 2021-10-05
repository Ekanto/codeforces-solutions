#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,i,cnt=0;
    int arr[1000000];
    cin >> n;
 
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    for(int i=0;i<n;++i){
        if(arr[i]!=arr[i+1]) cnt++;
    }
    cout << cnt;
}