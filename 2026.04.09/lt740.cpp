class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        vector<int> sum(mx + 1, 0);

        for (int x : nums) {
            sum[x] += x;
        }

        vector<int> dp(mx + 1, 0);
        dp[0] = 0;
        dp[1] = sum[1];

        for (int i = 2; i <= mx; i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + sum[i]);
        }

        return dp[mx];
    }
};