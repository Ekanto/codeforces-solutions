#include<bits/stdc++.h>

#define nl "\n"

using namespace std;

int main(){
    int n,l,r,cntl0(0),cntl1(0),cntr0(0),cntr1(0);
    cin >> n;
    while(n--){
        cin >> l >> r;
        if(l == 0) cntl0++;
        if(l ==1 ) cntl1++;
        if(r==0) cntr0++;
        if(r == 1) cntr1++;
    }
    cout << min({cntr1,cntr0}) + min({cntl0,cntl1});




}