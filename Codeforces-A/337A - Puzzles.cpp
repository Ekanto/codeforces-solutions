#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,m,MIN(0);
    int left,right;
    cin >> n >> m;
    int arr[1000];
    for(int i=0;i<m;++i){
        cin >> arr[i];
    }
 
    sort(arr,arr+m);
    left = arr[0];
    right  = arr[n-1];
    MIN = right- left; 
 
 
    for(int i=1;i<=m-n;++i){
        int res = arr[n+i-1] - arr[i];
        if(res < MIN){
            MIN =res;
        }
 
    }
 
    cout << MIN;
}