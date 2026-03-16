#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    unordered_map<int, int> mp;
    int firstUniqueEven(vector<int>& nums) {
        for(int num: nums){
        	if(mp.find(num) != mp.end()){
				mp[num]++;
            	continue;
			}
			
            if(num % 2 == 0){
                mp[num] = 1;
            }
        }
        
		// Ñ°ÕÒ´ð°¸
		for(int num: nums){
			if(mp[num] == 1){
				return num;
			}
		}
		
		return -1;
    }
};

int main(){
	vector<int> nums = {3,4,2,5,4,6};
	Solution s;
	cout << "\n" << s.firstUniqueEven(nums);
	return 0;
} 
