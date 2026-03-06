#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
		for(const auto& interval : intervals){
			if(ans.empty() || ans.back()[1] < interval[0]){
				ans.push_back(interval);
			}else{
				ans.back()[1] = max(ans.back()[1], interval[1]);
			}
		}
		
		return ans;
    }
};

int main(){
	vector<vector<int>> nums = {{1,3},{2,6},{8,10},{15,18}};
	
	Solution s;
	s.merge(nums);
	
	return 0;
} 
