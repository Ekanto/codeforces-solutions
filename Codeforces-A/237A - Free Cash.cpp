#include<iostream>

using namespace std;

int main(){
    int t,cnt(1),cnt2(1);
    int h,s,hold,sold;
    cin >> t;
    while(t--){
        cin >> h >> s;
        if(h==hold && s==sold){
            cnt++;
            if(cnt>cnt2){
                cnt2=cnt;
            }
        }
        else{
            cnt=1;
        }
            hold=h;
            sold=s;
    }
    cout << cnt2;
}