/*class Solution {
public:
    int checkheight(TreeNode* root){
         if(root == NULL){
            return 0;
        }
        int left = checkheight(root->left);
        int right = checkheight(root->right);

        return max(left,right) +1;

    };
    int diameterOfBinaryTree(TreeNode* root) {
         if(root == NULL){
            return 0;
        }
        int leftdaimeter = diameterOfBinaryTree(root->left);
        int rightdiameter = diameterOfBinaryTree(root->right);

        int currdiameter =checkheight(root->left) + checkheight(root->right);

        return max(currdiameter, max(leftdaimeter, rightdiameter));
       
        
    }
};*/