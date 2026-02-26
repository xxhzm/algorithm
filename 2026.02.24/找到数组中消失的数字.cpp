#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    	vector<int> fn;
        for(int i = 0;i < nums.size();i++){
        	int index = abs(nums[i]) - 1;
			if(nums[index] > 0){
				nums[index] = -nums[index];
			}
		}
		
		for(int i = 0;i < nums.size();i++){
			if(nums[i] > 0){
				fn.push_back(i + 1);
			}
		}
        
        return fn;
    }
};

int main(){
	vector<int> nums = {1, 1};
	
	Solution s;
	s.findDisappearedNumbers(nums);
	
	return 0; 
}
