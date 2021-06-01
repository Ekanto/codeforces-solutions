#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,a,b,cnt = 0;
    scanf("%d",&n);
    for(int i = 1;i<=n;++i){
        cnt = 0;
        cin >> a >> b;
        if(a%b == 0) cout << "0" << endl;
        else{
            cout << b-a%b << endl;
        }
       
         
    }
   
}