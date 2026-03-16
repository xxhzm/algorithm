#include <bits/stdc++.h>

using namespace std;



int main(){
	string str;
	
	cin >> str;
	
	char maxChar = str[0];
	for(int i = 1;i < str.size();i++){
		maxChar = max(maxChar, str[i]);
	}
	
//	统计出现的次数
	int count = 0;
	for(int i = 0;i < str.size();i++){
		if(maxChar == str[i]){
			count++;
		}
	}
	
	string ans;
	
	for(int i = 0;i < count;i++){
		ans += maxChar; 
	}
	
	cout << ans;

	return 0;
}
