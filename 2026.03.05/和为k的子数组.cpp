#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;  // 前缀和为0出现1次
        
        int sum = 0;
		int count = 0;
		for(int num: nums){
			sum += num;
			if(mp.count(sum - k)){
				count += mp[sum - k];
			}
			
			mp[sum]++;
		} 
		
		return count;
    }
};

int main(){
	return 0;
} 
