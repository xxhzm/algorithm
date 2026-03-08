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
				
				if(n->left) q.push(n->left);
				if(n->right) q.push(n->right);
			}
			
			ans.push_back(level);
		}

        return ans;
    }
};
