#include <bits/stdc++.h>

using namespace std; 

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    	int n = matrix.size();
        for(int i = 0;i < n;i++){
        	for(int j = i;j < n;j++){
        		swap(matrix[i][j], matrix[j][i]);
			}
		}
		
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n / 2;j++){
				swap(matrix[i][j], matrix[i][n - j - 1]);
			}
		}
    }
};

int main(){
	vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
	
	Solution s;
	s.rotate(matrix); 
	return 0;
}
