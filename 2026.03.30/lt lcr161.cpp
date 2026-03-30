class Solution {
public:
    int maxSales(vector<int>& sales) {
        int ans = sales[0];
        int preSum = 0;
        for(int num: sales){
            preSum += num;
            ans = max(ans, preSum);

            if(preSum < 0){
                preSum = 0;
            }
        }
        return ans;
    }
};