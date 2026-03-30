class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> nums(rowIndex + 1);
        for(int i = 0;i <= rowIndex;i++){
            nums[i].resize(i + 1);
            nums[i][0] = 1;
            nums[i][i] = 1;
        }

        for(int i = 2;i <= rowIndex;i++){
            for(int j = 1;j < i;j++){
                nums[i][j] = nums[i - 1][j] + nums[i - 1][j - 1];
            }
        }

        return nums[rowIndex];
    }
};