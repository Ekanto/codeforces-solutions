#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x,d,cnt(0);
    char ch;
    cin >> n >> x;
    long long tot = x;
    for(int i = 1; i<=n;++i){
        cin >> ch >> d;
        if(ch == '+'){
            tot+=d;
        }
        else{
            if(ch == '-'){
                if(tot<d){
                    cnt++;
                }
                else{
                    tot -=d;
                }
                
            }
        }

    }
    cout << tot << " " << cnt;

}