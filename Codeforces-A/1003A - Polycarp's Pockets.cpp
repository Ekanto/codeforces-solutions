#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v(101);
    for(int i = 0;i<n;++i)
    {
        int a;
        cin >> a;
        v[a]++;
    }
    cout << *max_element(v.begin(),v.end());
}