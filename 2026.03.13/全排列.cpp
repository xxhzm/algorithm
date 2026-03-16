#include <bits/stdc++.h>

using namespace std;
 
class Solution {
public:
	vector<vector<int>> ans;
	vector<int> path;
	vector<bool> used;
	
	void backtrack(vector<int> nums){
		if(path.size() == nums.size()){
			ans.push_back(path);
			return;
		}
		
		for(int i = 0;i < nums.size();i++){
			if(used[i]) continue;
			
			used[i] = true;
			path.push_back(nums[i]);
			
			backtrack(nums);
			
			used[i] = false;
			path.pop_back();
		}
	} 
	
    vector<vector<int>> permute(vector<int>& nums) {
    	used = vector<bool>(nums.size(), false);
    	backtrack(nums);
        return ans;
    }
};


int main(){
	vector<int> nums = {1,2,3};
	Solution s;
	s.permute(nums);
	return 0;
}
