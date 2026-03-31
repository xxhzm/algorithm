class Solution {
public:
    vector<vector<int>> ans;
    vector<int> used;
    vector<int> path;


    void backtrack(vector<int>& nums){
        if(path.size() == nums.size()){
            ans.push_back(path);
            return;
        }

        for(int i = 0;i < nums.size();i++){
            if(used[i]) continue;

            used[i] = 1;
            path.push_back(nums[i]);

            backtrack(nums);
            
            path.pop_back();
            used[i] = 0;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        used = vector<int>(nums.size(), 0);
        backtrack(nums);
        return ans;
    }
};