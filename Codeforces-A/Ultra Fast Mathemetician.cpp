#include<bits/stdc++.h>
 
 
using namespace std;
 
int main(){
	
	string str1;
	string str2;
	string str;
	string s1 = "1";
	string s2 = "0";
	getline(cin,str1);
	getline(cin,str2);
	int l = str1.length();
	for(int i = 0;i<l;++i){
		if(str1[i]!=str2[i]){
			str.append(s1);
		}
		else{
			str.append(s2);
		}
		
	}
	cout << str << "\n";
	
}