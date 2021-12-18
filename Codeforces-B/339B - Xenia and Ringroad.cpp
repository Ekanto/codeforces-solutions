#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main(){
    ll int time=0;
    int n,m;
    cin >> n >> m;
    int arr[m];
    for (int i = 1; i <= m; i++)
    {
        cin >> arr[i];
    }

    time = arr[1] - 1;

    for (int i = 1; i <= m-1; i++)
    {
        if(arr[i] > arr[i+1]){
            time+=n-(arr[i] - arr[i+1]);
        }
        else{
            time+=arr[i+1] - arr[i];
        }
        
    }
    cout << time;

    

}