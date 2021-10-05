#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int a,b,res,flag,x=0;
	cin >> a >> b;
	while(a>0 && b>0){
		a--;
		b--;
		x+=1;
 
		if(b  == 0){
			res = a/2;
			flag = 1;
		}
		else if(a == 0 ){
			res = b/2;
			flag = 2;
		}
	}
	if(flag == 1) cout << x <<" " << res;
	else if(flag == 2) cout << x << " " << res;
}