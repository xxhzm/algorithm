#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<long long> a(n), b(n);
	for(int i = 0;i < n;++i) cin >> a[i]; 
	for(int i = 0;i < n;++i) cin >> b[i]; 
	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	int i = 0;
	int j = 0;
	
	int match = 0;
	while(i < n && j < n){
		if(b[j] < a[i]){
			match++;
			i++;
			j++; 
		}else{
			i++;
		}
	}
	
	cout << n - match;

	return 0;
}
