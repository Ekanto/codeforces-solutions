#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int t,n;
    cin >> t;
    while(t--){
        int cnt(0),res(0);
        cin >> n >> s;

        for(int i=0;i<n;++i){
            if(s[i] == '('){
                cnt++;
            }
            else{
                --cnt;
                if(cnt<0){
                    cnt=0;
                    res++;
                }
            }
        }
        cout << res << "\n";
    }
    

}