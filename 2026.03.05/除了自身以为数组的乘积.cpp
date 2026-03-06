#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
		vector<int> ans;
        
		vector<int> l(n);
		vector<int> r(n);
		l[0] = 1;
		
		for(int i = 1;i < n;i++){
			l[i] = l[i - 1] * nums[i - 1];
		}
		
		r[n - 1] = 1;
       	for(int i = n - 2;i >= 0;i--){
       		r[i] = r[i + 1] * nums[i + 1];	
		}
       	
       	for(int i = 0;i < n;i++){
       		ans.push_back(l[i] * r[i]);
		}
       	
       	return ans;
    }
};

int main(){
	vector<int> nums = {1,2,3,4};
	
	Solution s;
	cout << s.productExceptSelf(nums)[0];
	
	return 0;
} 
