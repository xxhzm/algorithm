#include <bits/stdc++.h>

using namespace std; 

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    	int n = matrix.size();
    	int m = matrix[0].size();
    	
    	vector<int> rowZ(n); 
        vector<int> colZ(m);
        
        for(int i = 0;i < n;i++){
        	for(int j = 0;j < m;j++){
        		if(matrix[i][j] == 0){
        			rowZ[i] = 1;
					colZ[j] = 1;
				}
			}
		}
		
		for(int i = 0;i < n;i++){
        	for(int j = 0;j < m;j++){
        		if(rowZ[i] == 1 || colZ[j] == 1){
        			matrix[i][j] = 0;
				}
			}
		}
    }
};

int main(){
	vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
	Solution s;
	s.setZeroes(matrix);
	
	return 0;
} 
