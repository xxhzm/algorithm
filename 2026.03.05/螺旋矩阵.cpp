#include <bits/stdc++.h>

using namespace std; 

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if(matrix.empty()){
        	return ans;
		}
		
		int top = 0;
		int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;
		
		while(top <= bottom && left <= right){
			// 左 -> 右
			for(int j = left;j <= right;j++){
				ans.push_back(matrix[top][j]);
			}
			top++;
			
			// 上 -> 下
			for(int j = top;j <= bottom;j++){
				ans.push_back(matrix[j][right]);
			}
			right--;
			
			// 右->左 
			if(top <= bottom){
				for(int j = right;j >= left;j--){
					ans.push_back(matrix[bottom][j]);
				}
				bottom--;
			}
			
			// 下 -> 上
			if(left <= right){
				for(int j = bottom;j >= top;j--){
					ans.push_back(matrix[j][left]);
				}
				left++;
			} 
		}
        
        return ans;
    }
};

int main(){
	vector<vector<int>> matrix = {{1,2,3, 1},{4,5,6},{7,8,9}};
	Solution s;
	s.spiralOrder(matrix);
	 
	return 0;
}
