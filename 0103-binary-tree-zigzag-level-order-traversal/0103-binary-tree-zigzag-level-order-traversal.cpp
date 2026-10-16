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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            queue<TreeNode*> q;
        vector<vector<int>> res;

        if (root == nullptr) return res;

        q.push(root);
        bool rtol=false;

        while (!q.empty()) {
            int lvlsize = q.size();
            vector<int> tmp;

            while (lvlsize--) {
                TreeNode* t = q.front();
                q.pop();

                tmp.push_back(t->val);

                if (t->left)
                    q.push(t->left);

                if (t->right)
                    q.push(t->right);
            }
            if(rtol==true){
                reverse(tmp.begin(), tmp.end());
                rtol=false;
                res.push_back(tmp);
            }
            else{
                res.push_back(tmp);
                rtol=true;

            }

            
        }

        
        return res;
    }
};