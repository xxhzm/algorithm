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
    unordered_map<int, int> pos;

    TreeNode* build(vector<int>& preorder, int pl, int pr,
                    vector<int>& inorder, int il, int ir){
        if(pl > pr){
            return NULL;
        }

        int rootVal = preorder[pl];
        TreeNode* root = new TreeNode(rootVal);

        int k = pos[rootVal];
        int left = k - il;

        root->left = build(preorder, pl + 1, pl + left, inorder, il, k - 1);
        root->right = build(preorder, pl+left+1, pr, inorder, k+1, ir);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i = 0;i < inorder.size();i++){
            pos[inorder[i]] = i;
        }

        return build(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
    }
};