#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,n,m,MIN(0);
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


    while(i<=(m-n)){
        int res=0;
        res = right - left; //5
        if(res < MIN){
            res = MIN;
            left++;
            right++;
        }
        i++;
    }

    cout << MIN;
}