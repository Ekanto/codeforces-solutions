#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt(0);
    cin >> n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }

    int high=arr[0];
    int low = arr[0];

    for(int i=0;i<n;++i){
        if(arr[i] > high){
            high = arr[i];
            cnt++;
        }
        else if (arr[i] < low)
        {
            low = arr[i];
            cnt++;
        }
    }

    cout << cnt;
}