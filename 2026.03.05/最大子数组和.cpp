#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int preSum = 0;
		int ans = nums[0];
		
		for(int num: nums){
			preSum += num;
			ans = max(ans, preSum);
			
			if(preSum < 0){
				preSum = 0;
			}
			
		}
		
		return ans; 
    }
};

int main(){
	vector<int> nums = {5,4,-1,7,8};
	
	Solution s;
	cout << s.maxSubArray(nums);
	
	return 0;
} 
