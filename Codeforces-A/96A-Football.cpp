#include<bits/stdc++.h>

#define nl "\n"

using namespace std;

int main(){
    int c1(0);
    char str[101];
    cin >> str;
    int l = strlen(str);
    for (int i = 0; i < l; ++i)
    {
       if(c1 >=6) break;
       else{
            if(str[i] == str[i+1]){
           c1++;
       }
       else{
           c1 = 0;
       }

       }
      
      
    }
    c1 = c1+1;
    if(c1 >=7) cout << "YES";
    else{
        cout << "NO";
    }
   
    
}

        
   
    
