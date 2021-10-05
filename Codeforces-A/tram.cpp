#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int t,in,out,x = 0,f= 0,res = 0;
	cin >> t;
	for(int i = 0;i<t;++i){
		cin >> out >> in;
		res = res - out; //3
		res = res + in;
		if(res>x){
			x =res;
		}
		else{
			continue;
		}
	}
	cout << x << "\n";
}
