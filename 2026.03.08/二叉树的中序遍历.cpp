class Solution {
public:
    void pr(TreeNode* root, vector<int>& res){
        if(!root){
            return;
        }

        pr(root->left, res);
        res.push_back(root->val);
        pr(root->right, res);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        pr(root, res);
        return res;
    }
};
