#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2){
        	return n;
		}
		
		int a = 1, b = 2, temp;
		for(int i = 3;i <= n;i++){
			temp = a;
			a = b;
			b = temp + b;
		}
		
		return b;
    }
};

int main(){
	Solution s;
	cout << s.climbStairs(3);
	return 0;
} 
