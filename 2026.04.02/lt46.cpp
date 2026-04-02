class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    vector<int> used;

    void backtrack(vector<int>& nums){
        if(path.size() == nums.size()){
            ans.push_back(path);
            return;
        }

        for(int i = 0;i < nums.size();i++){
            if(used[i]) continue;
            path.push_back(nums[i]);
            used[i] = 1;
            backtrack(nums);

            path.pop_back();
            used[i] = 0;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        used.resize(nums.size());
        backtrack(nums);
        return ans;
    }
};