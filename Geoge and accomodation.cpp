#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,a,b,cnt = 0;
    cin >> n;
    for(int i=1;i<=n;++i){
        cin  >> a >> b;
        if(a <= b-2) cnt++;
    }
    cout << cnt<< endl;
    
}