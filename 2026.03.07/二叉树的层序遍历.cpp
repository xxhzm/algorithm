#include <bits/stdc++.h>

using namespace std;

 
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:	
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL){
        	return ans;
		}
		queue<TreeNode*> q;
		q.push(root);
		
		while(!q.empty()){
			int n = q.size();
			vector<int> level;
			
			for(int i = 0;i < n;i++){
				TreeNode* n = q.front();
				q.pop();
				
				level.push_back(n->val);
				
				if(node->left) q.push(node->left);
				if(node->right) q.push(node->right);
			}
			
			ans.push_back(level);
		}
    }
};

int main(){
	TreeNode* root = new TreeNode(3);
	root->left = new TreeNode(9);
	root->right = new TreeNode(20);
	root->right->left = new TreeNode(15);
	root->right->right = new TreeNode(7);
	
	Solution s;
	s.levelOrder(root);
	
	return 0;
}
