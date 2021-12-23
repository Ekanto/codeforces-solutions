#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n;
    cin >> m;
    long long res =pow(2,n);
    cout << m%res;
}