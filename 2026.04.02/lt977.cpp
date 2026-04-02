class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int index = nums.size() - 1;
        vector<int> ans(nums.size());
        while(l <= r){
            long long lVal = nums[l] * nums[l];
            long long rVal = nums[r] * nums[r];
            if(lVal > rVal){
                ans[index] = lVal;
                l++;
            }else{
                ans[index] = rVal;
                r--;
            }
            index--;
        }

        return ans;
    }
};