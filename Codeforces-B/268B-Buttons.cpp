#include<iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long res  = n-1;
    long long MAX = (res*(res+1)*(res+2)) / 6;
    cout << n+MAX;
}