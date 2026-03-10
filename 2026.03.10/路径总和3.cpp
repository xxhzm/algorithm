/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* node, int targetSum, long long curSum, unordered_map<long long, int>& prefix){
        if(!node){
            return 0;
        }

        curSum += node->val;

        int count = prefix[curSum - targetSum];

        prefix[curSum]++;

        count += dfs(node->left, targetSum, curSum, prefix);
        count += dfs(node->right, targetSum, curSum, prefix);

        prefix[curSum]--;

        return count;
    }

    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long, int> prefix;
        prefix[0] = 1;

        return dfs(root, targetSum, 0, prefix);
    }
};