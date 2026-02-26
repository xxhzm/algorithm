#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	std::map<int, int> mp;
    	
 		for (int i = 0; i < nums.size(); i++) {
     		int need = target - nums[i];
     		
     		auto it = mp.find(need);
     		if(it != mp.end()){
     			return{it->second, i};	
			}
			
			mp[nums[i]] = i;
		}
				
        return {};
    }
};

int main(){
	std::vector<int> vec = {3,2,4};

	Solution a;
	auto ans = a.twoSum(vec, 6);
	
	cout << ans[0] << "," << ans[1] << "\n";

	return 0;
} 
