#include<iostream>

#define nl "\n"

using namespace std;

int main(){
    int shov,change,cnt(1);
    cin >> shov >> change;

    while(1){
        if((shov*cnt)%10 == change || (shov*cnt)%10 == 0){
            break;
        }
        else{
            cnt++;
        }

    }

    cout << cnt << nl;
}