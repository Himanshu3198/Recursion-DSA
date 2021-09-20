// 894. All Possible Full Binary Trees

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
      unordered_map<int,vector<TreeNode*>>dp;
    vector<TreeNode*> allPossibleFBT(int n) {
      vector<TreeNode*>ans;
        
           if(dp.find(n)!=dp.end()){
               return dp[n];
           }
           if(n==1){
               
               TreeNode *node=new TreeNode(0);
                   ans.push_back(node);
               
                  dp[n]=ans;
                   return ans;
           }
        
            for(int i=1;i<=n-2;i++){
                
                     
                vector<TreeNode*>left=allPossibleFBT(i);
                vector<TreeNode*>right=allPossibleFBT(n-i-1);
                
                
                
                for(int j=0;j<left.size();j++){
                    
                    for(int k=0;k<right.size();k++){
                        
                        TreeNode *root=new TreeNode(0);
                        
                        root->left=left[j];
                        root->right=right[k];
                        
                        ans.push_back(root);
                    }
                }
                
            }
        
            dp[n]=ans;
        return ans;
    }
};
