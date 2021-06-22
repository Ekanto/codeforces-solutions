#include<iostream>

using namespace std;

int main(){
    int n,p,nt;
    cin >> n >> p >> nt;
    (p < n || nt < n) ? cout << "No" << "\n" :
                        cout << "Yes" << "\n";
    
}