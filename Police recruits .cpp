#include<bits/stdc++.h>

typedef long long i64;

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	i64 n,cnt(0),num,officer(0);
	cin >> n;
	while(n--){
		cin >> num;
		if(num>=1){
			officer+=num;
		}
		else if(num == -1 && officer > 0){
			officer--;
		}
		else{
			cnt++;
		}
	}
	cout << cnt << "\n";
}