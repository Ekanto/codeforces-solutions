#include<iostream>

#define nl "\n"
#define ll long long

using namespace std;

int main(){
    ll t,sum(0),cnt1(0),cnt2(0);
    cin >> t;
    while(t--){
        sum=0;
        cnt2=0,cnt1=0;
        ll n;
        cin >> n;
        ll arr[n];
        for(ll i=0;i<n;++i){
            cin >> arr[i];
            if(arr[i] == 1){
                cnt1++;
            }
            else{
                cnt2++;
            }
            sum+=arr[i];
                       
        }
        if(sum%2!=0){
            cout << "NO" << nl;
        }
        else if (sum%2==0 && cnt1 >=2)
        {
            cout << "YES" << nl;
        }

        else if ((!cnt1) && n%2==0)
        {
            cout << "YES" << nl;
        }

        else if ((!cnt1) && n%2!=0)
        {
            cout << "NO" << nl;
        }
        
    }


}