#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> nums(n + 1);
		for(int i = 0;i <= n;i++){
			nums[i] = __builtin_popcount(i);
		}
        
        return nums;
    }
};

int main(){
	Solution s;
	s.countBits(4);
	
	return 0;
} 
