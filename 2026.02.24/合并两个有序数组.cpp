#include <bits/stdc++.h>


using namespace std;

class Solution {
public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//    	int p1 = 0, p2 = 0;
//    	int s[m + n];
//    	int cur = 0;
//    	while(p1 < m || p2 < n){
//    		if(p1 == m){
//    			cur = nums2[p2++];
//			}else if(p2 == n){
//				cur = nums1[p1++];
//			}else if(nums1[p1] > nums2[p2]){
//				cur = nums2[p2++];
//			}else{
//				cur = nums1[p1++];
//			}
//			
//			s[p1 + p2 - 1] = cur;
//		}
//		
//		for(int i = 0;i != m + n;i++){
//			nums1[i] = s[i];
//			std::cout << nums1[i];
//		}
//    }
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    	int i, j = 0;
		for(i = m;i != m + n;i++){
    		nums1[i] = nums2[j++];
		}
		
		sort(nums1.begin(), nums1.end());
	}
};

int main(){
	std::vector<int> nums1 = {1, 2, 3};
	std::vector<int> nums2 = {2, 5, 6};
	
	Solution a;
	a.merge(nums1, 3, nums2, 3);
	
	return 0;
}
