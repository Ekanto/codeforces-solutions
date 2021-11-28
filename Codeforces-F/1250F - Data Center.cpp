#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,n,res,min = 1000000;
    cin >> n;
    for(int i=1;i<=sqrt(n);++i){
        if(n%i == 0){
            res = n/i; // 18
        }
            int per = (res*2)+(i*2); // 
            if(per< min){
                min = per;
            }
        
    }

    cout << min;
}