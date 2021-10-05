#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    n++;
    while(1){
         int a = n / 1000;
    int b = (n % 1000) / 100;
    int c =  (n % 100) / 10;
    int d = (n % 10) % 10;

        if((a != b) && (a !=c) && ( a != d) && (b !=c)&& (b !=d)&& (c !=d)&& (d !=a)){
        cout << a << b << c << d ;
        break;
    }
    else{
        n++;
    }

    }
    
}