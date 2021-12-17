#include<iostream>

using namespace std;

int main(){
    int t,cnt1(0),cnt2(0);
    cin >> t;
    while(t--){
        cnt1=0,cnt2=0;
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;++i){
            cin >> arr[i];
        }
        for(int i=0;i<n;++i){
            if(i%2==0 && arr[i]%2!=0) cnt1++;
            else if (i%2!=0 && arr[i]%2==0)
            {
                cnt2++;
            }
        }
        if(cnt1==cnt2) cout << cnt1 << "\n";
        else{
            cout << -1 << "\n";
        }

    }
}