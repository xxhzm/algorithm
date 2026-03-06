#include<bits/stdc++.h>

using namespace std;

//class Solution {
//public:
//    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//        vector<int> ans;
//        deque<int> queue;
//        
//        for(int addIndex = 0;addIndex < k;addIndex++){
//        	while(!queue.empty() && nums[addIndex] >= nums[queue.back()]){
//        		queue.pop_back();
//			}
//			queue.push_back(addIndex);
//		}
//		
//		ans.push_back(nums[queue.front()]);
//		
//		for(int addIndex = k;addIndex < nums.size();addIndex++){
//			while(!queue.empty() && nums[addIndex] >= nums[queue.back()]){
//        		queue.pop_back();
//			}
//			queue.push_back(addIndex);
//			
//			int removeIndex = addIndex - k;
//			if(queue.front() == removeIndex){
//				queue.pop_front();
//			}
//			
//			ans.push_back(nums[queue.front()]);
//		}
//        
//        return ans;
//    }
//};

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> q;
        
        for(int i = 0;i < k;i++){
        	while(!q.empty() && nums[i] >= nums[q.back()]){
        		q.pop_back();
			}
			
			q.push_back(i);
		}
		
		ans.push_back(nums[q.front()]);
		
		for(int i = k;i < nums.size();i++){
			while(!q.empty() && nums[i] >= nums[q.back()]){
        		q.pop_back();
			}
			
			q.push_back(i);
			
			int removeI = i - k;
			if(q.front() == removeI){
				q.pop_front();
			}
			
			ans.push_back(nums[q.front()]);
		} 
        return ans;
    }
};

int main(){
	vector<int> nums = {1};
	
	Solution s;
	s.maxSlidingWindow(nums, 1);
	
	return 0;
} 
