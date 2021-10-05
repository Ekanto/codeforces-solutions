#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,height,a[1000000];
    int x=0;
 
    cin >> n >> height;
 
    for(int i=0;i<n;++i){
        cin >> a[i];
 
        if(a[i] > height){
            x = x+2;
        }
 
        else{
            x = x+1;
        }
    }
 
    cout << x;
 
    return 0;
 
 
}