#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,sum=0,rim=0;
    cin >> n;

    if(n%100 == 0) cout << n/100;
    else{
        while(n!=0){
            if(n>100){
                sum=sum+n/100; // 9
                n=n%100; //75
            }
            else if (n<100 && n>=20)
            {
                sum =sum+n/20; // 3
                n = n%20; // 15
            }
            else if (n<20 && n>=10)
            {
                sum=sum+n/10; // 1
                n=n%10; //5
                
            }

            else if (n<10 && n>=5)
            {
                sum=sum+n/5; // 1
                n=n%5; //5
            }
            else if (n<5 && n>=1)
            {
                sum=sum+n/1; // 1
                n=n%1; //5
            }
            
            
            
        }
        cout << sum;
    }

    
}