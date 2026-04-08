#include <bits/stdc++.h>

using namespace std;

struct Node{
    int x;
    int y;
};

void dfs(vector<vector<int>> &nums, int i, int j){
    if(i < 0 || j < 0 || i >= nums.size() || j >= nums[0].size()){
        return;
    }

    if(nums[i][j] == 0){
        return;
    }

    nums[i][j] = 0;

    dfs(nums, i + 1, j);
    dfs(nums, i - 1, j);
    dfs(nums, i, j + 1);
    dfs(nums, i, j - 1);
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> nums(n, vector<int>(m));
    for(int i = 0;i < n;i++){
        string s;
        cin >> s;
        for(int j = 0;j < m;j++){
            nums[i][j] = s[j] - '0';
        }
    }
    int ans = 0;


    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(nums[i][j] != 0){
                ans++;
                dfs(nums, i, j);
            }
        }
    }

    cout << ans;
    return 0;
}