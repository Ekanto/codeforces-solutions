#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	char arr[101];
	int cnt = 0;
	cin >> arr;
	int l = strlen(arr);
	
	for(int i = 0;i<l;++i){
		if(arr[i] == 'H' || arr[i] == 'Q' || arr[i] == '9'){
			cnt++;
		}
	}
	
	if(cnt) cout << "YES";
	else{
		cout << "NO";
	}
}
	