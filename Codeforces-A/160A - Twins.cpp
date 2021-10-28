#include<bits/stdc++.h>

#define nl "\n"

using namespace std;

int main(){
    int n,cnt(1),sum2(0);
    float sum(0);
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;++i){
        cin >> arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n, greater<int>());
    float res = sum/2;

   for(int i  = 0;i<n;++i){
        sum2+=arr[i];
        if(sum2 > res){

        
        break;
        cnt = 1;
        }
        else{
            cnt++;
        }
    }
    cout << cnt << nl;
}