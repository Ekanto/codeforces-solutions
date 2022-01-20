#include<iostream>

using namespace std;

int main(){
    int n,m=2,cnt(0);
    cin >> n;
    int arr[n][m];
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cin >> arr[i][j];
        }
    }

    for(int i=1;i<=n;++i){
        int a=arr[i][1];
        for(int j=1;j<=n;++j){
            if(a==arr[j][2]){
                cnt++;
            }


        }
    }

    cout << cnt;


}