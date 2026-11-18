/*class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if(root == NULL){
            return 0;
        }

        int count = 0;

        queue<TreeNode*> q;
        q.push(root);
  
        while(!q.empty()){
            int size = q.size();
            vector<int>level;

            for(int i = 0 ; i < size ; i++){
                TreeNode* curr = q.front();
                q.pop();

                
                if(curr->left !=NULL){
                    q.push(curr->left);
                }
                 if(curr->right !=NULL){
                    q.push(curr->right);
                }
            }
            count++;
        
        }
        return count;
    
    }
};*/

/*
class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if(root == NULL){
            return 0;
        }

         int left(maxDepth(root->left));
         int right(maxDepth(root->right));

         return max(left,right)+1;
    }
}; */