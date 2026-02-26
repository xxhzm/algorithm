#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int ans = 0;
        
        while(left < right){
			ans = max(ans, min(height[left], height[right]) * (right - left));
			
			if(height[left] < height[right]){				
				left++;
			}else{
				right--;
			}
		}
        
        return ans;
    }
};

int main(){
	vector<int> height = {3,6,1};
	
	Solution s;
	cout << s.maxArea(height);
	
	return 0;
} 
