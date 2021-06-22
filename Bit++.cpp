
#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    int sum = 0;
    int flag = 0;
    string str1;
    cin >> n;
    for(int i=1;i<=n;++i){
        cin >> str1;
        if((str1 == "++X") || (str1 == "X++")){
 
            sum = sum+1;
            flag = 1;
        }
    
        else if ((str1 == "--X") || (str1 == "X--"))
        {
            sum = sum-1;
            flag = 2;
        }
 
    }
 
    if(flag == 1){
        cout << sum;
    }
    else if(flag == 2)
    {
        cout << sum;
    }
    
}