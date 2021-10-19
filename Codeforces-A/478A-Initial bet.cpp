#include<iostream>

using namespace std;

int main(){
    int c1,c2,c3,c4,c5;
    scanf("%d %d %d %d %d",&c1,&c2,&c3,&c4,&c5);
    int res = c1+c2+c3+c4+c5;
    if(res == 0 || res%5 !=0){
        printf("%d",-1);
    }
    else{
        if(res % 5 == 0){
        printf("%d",res/5);
    }

    }

}