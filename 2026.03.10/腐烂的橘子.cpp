#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        queue<pair<int,int>> q;
        int fresh = 0;
        
        for(int i = 0;i < row;i++){
        	for(int j = 0;j < col;j++){
        		if(grid[i][j] == 2){
        			q.push({i, j});
				}else if(grid[i][j] == 1){
					fresh++;
				}
			}
		}
		
		int ans = 0;
		
        int dirs[4][2]={{1,0},{-1,0},{0,1},{0,-1}};

		while(!q.empty() && fresh > 0){
			int size = q.size();
			for(int i = 0;i < size;i++){
				auto it = q.front();
				q.pop();
				for(auto dir: dirs){
					int nx = it.first + dir[0];
					int ny = it.second + dir[1];
					
					if(nx >= 0 && ny >= 0 && nx < row && ny < col && grid[nx][ny] == 1){
						grid[nx][ny] = 2;
						q.push({nx, ny});
						fresh--;
					}
				}
			}
			ans++;
		}
		
		if(fresh > 0){
			return -1;
		}
		
		return ans;
    }
};

int main(){
	vector<vector<int>> grid = {
	    {2,1,1},
	    {1,1,0},
	    {0,1,1}
	};
	Solution s;
	cout << s.orangesRotting(grid); 
	return 0;
} 
