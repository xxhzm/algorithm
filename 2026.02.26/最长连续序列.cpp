#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    	unordered_set<int> s(nums.begin(), nums.end());
		int n = nums.size();
		
		int ans = 0;
		for (int num : s) {
			if(!s.count(num- 1)){
				int cur = num;
				int len = 1;
				
				while(s.count(cur + 1)){
					cur++;
					len++;
				}
				
				ans = max(ans, len);
			}
		}

		return ans;
    }
};

int main(){
	vector<int> nums = {0,3,7,2,5,8,4,6,0,1};
	
	Solution s;
	cout << s.longestConsecutive(nums);
} 
