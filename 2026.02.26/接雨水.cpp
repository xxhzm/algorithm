#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
		int n = height.size();
		if(n == 0){
			return 0;
		}
		
		vector<int> lMax(n);
		lMax[0] = height[0];
		for(int i = 1;i < n;++i){
			lMax[i] = max(lMax[i - 1], height[i]);
		}
		
		vector<int> rMax(n);
		rMax[n - 1] = height[n - 1];
		for(int i = n - 2;i >= 0;--i){
			rMax[i] = max(rMax[i + 1], height[i]);
		}
		
		int ans = 0;
		for(int i = 0;i < n;i++){
			ans += min(lMax[i], rMax[i]) - height[i];
		}
		
		return ans;
    }
};


int main(){
	vector<int> vec = {0,1,0,2,1,0,1,3,2,1,2,1};
	
	Solution s;
	cout << s.trap(vec);
	
	return 0;
} 
