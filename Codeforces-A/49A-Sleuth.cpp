#include<bits/stdc++.h>

using namespace std;

int main(){
   string str;
   int flag;
   getline(cin,str);
   int n=str.length();
   for(int i=n-1;i>=0;i--){
      if(str[i] == ' ' || str[i] == '?') continue;
      else{
         if(str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e'|| str[i] == 'I' || str[i] == 'i'|| str[i] == 'o' || str[i] == 'O'|| str[i] == 'u' || str[i] == 'U'|| str[i] == 'y' || str[i] == 'Y'){
            flag=1;
         }
         else flag=2;
         break;
         
      }

   }
   if(flag==1) cout << "YES";
   if(flag==2) cout << "NO";
}