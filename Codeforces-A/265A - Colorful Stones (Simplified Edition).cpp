#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
    int cnt=0;
    cin >> a >> b;
    int l = b.length();
    for(int i=0;i<l;++i){
        if(a[cnt] == b[i]){
            cnt++;
        }

    }
    cout << cnt+1;

}