#include<iostream>

using namespace std;

int main(){
    int n,fence,a,cnt(0);
    scanf("%d %d",&n,&fence);
    while(n--){
        scanf("%d",&a);
        if(fence>=a){
            cnt+=1;
        }
        else{
            cnt+=2;
        }
    }
    cout << cnt << "\n";
}