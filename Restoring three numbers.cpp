#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n = 4;
    int arr[n]; 
    for(int i = 0;i<n;++i){
        cin >> arr[i];
    }
    sort(arr,arr+n);
 
    for(int i = 0;i<n-1;++i){
        cout <<  arr[n-1] - arr[i] << " ";
    }
    
    
}