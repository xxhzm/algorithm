#include <bits/stdc++.h>

using namespace std; 

class Solution {
public:
    int trap(vector<int>& height) {
    	int n = height.size();
    	vector<int> lMax(n);
    	
    	lMax[0] = height[0];
    	for(int i = 1;i < n;i++){
    		lMax[i] = max(height[i], lMax[i - 1]);
		}
		
		vector<int> rMax(n);
		rMax[n - 1] = height[n - 1];
		for(int i = n - 2;i >= 0;i--){
			rMax[i] = max(height[i], rMax[i + 1]);
		}
		
		int ans = 0;
		for(int i = 0;i < n;i++){
			ans += min(rMax[i], lMax[i]) - height[i]; 
		}
		
    	return ans;
	};
};

int main(){
	
	vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
	Solution s;
	s.trap(height);
	
	return 0;
}
