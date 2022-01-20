#include<bits/stdc++.h>

using namespace std;

int main(){
    int frnd, bottle, drink, lemon, slice, salt, tdrink, tsalt;
    cin >> frnd>> bottle>> drink>> lemon>> slice>> salt>> tdrink>> tsalt;
    int totdrink  = (bottle*drink);
    int toastd = (totdrink/tdrink);
    int lime  = lemon * slice;
    int netsalt = (salt/tsalt);
    cout << min({toastd, lime, netsalt }) / frnd; 

}