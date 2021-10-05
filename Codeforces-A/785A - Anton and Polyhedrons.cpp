#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    string s1 = "Tetrahedron";
    string s2 = "Cube";
    string s3 = "Octahedron";
    string s4 = "Dodecahedron";
    string s5 = "Icosahedron";
    string s;
    int n,cnt = 0;
    cin >> n;
    for(int i=1;i<=n;++i){
        cin >> s;
        if(s.compare(s1) == 0) cnt = cnt+4;
        else if(s.compare(s2) == 0) cnt = cnt+6;
         else if(s.compare(s3) == 0) cnt = cnt+8;
          else if(s.compare(s4) == 0) cnt = cnt+12;
           else if(s.compare(s5) == 0) cnt = cnt+20;
    }
 
    cout << cnt << endl;
   
}