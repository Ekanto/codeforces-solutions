#include<iostream>
 
using namespace std;
 
int main(){
    int t;
    int x,y,z;
    int s1 = 0,s2 = 0,s3 = 0;
    cin >> t;
    while(t--){
        cin >> x >> y >> z;
        s1+=x;
        s2+=y;
        s3+=z;
    }
 
    (s1 == 0 && s2 == 0 && s3 == 0) ? cout << "YES" << "\n": cout << "NO" << "\n";
 
  
 
 
}