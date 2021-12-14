#include<iostream>
 
using namespace std;
 
int main(){
    int t,n,cnt(0);
    cin >> t;
    while(t--){
    cnt=0;
    cin >>n;
    int arr[n];
 
    for(int i=1;i<=n;++i){
        cin >> arr[i];
    }
    int first = arr[1];
    for(int i=1;i<=n;++i){
        if(first == arr[i+1]){
            cnt++;
        }
    }
    if(cnt==0) cout << 1 << "\n";
    else
    {
        for(int i=1;i<=n;++i){
            if(first !=arr[i+1]){
                cout << i+1 << "\n";
                break;
            }
 
        }
    }
    }
    
}