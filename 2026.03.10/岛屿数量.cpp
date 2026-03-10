#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	void dfs(vector<vector<char>>& grid, int i, int j){
		int n = grid.size();
		int m = grid[0].size();
		if(i >= n || j >= m || i < 0 || j < 0 || grid[i][j] == '0'){
			return;
		}
		
		grid[i][j] = '0';
		
		dfs(grid, i + 1,j);
		dfs(grid, i - 1,j);
		dfs(grid, i, j + 1);
		dfs(grid, i, j - 1);
	} 
	
    int numIslands(vector<vector<char>>& grid) {
    	int ans = 0;    	
    	for(int i = 0;i < grid.size();i++){
    		for(int j = 0;j < grid[0].size();j++){
    			if(grid[i][j] == '1'){
    				ans++;
    				dfs(grid, i, j);
				}
			}
		}
		
        return ans;
    }
};

int main(){
	vector<vector<char>> grid = {
{'1','1','1','1','0'},
{'1','1','0','1','0'},
{'1','1','0','0','0'},
{'0','0','0','0','0'}
	};
	
	Solution s;
	cout << s.numIslands(grid);
	return 0; 
} 
