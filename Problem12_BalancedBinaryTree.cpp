// link: https://leetcode.com/problems/balanced-binary-tree/
class Solution {
public:
    int HeightandCheck(TreeNode* root, bool &check){
        if(!root)
            return 0;
        int a = HeightandCheck(root->left, check);
        int b = HeightandCheck(root->right, check);
        if(abs(a-b) > 1)
        {
            check = 0;
            return check; // This 'return' to stop the funcion, you can replace a random number instead! 
        }
        return max(a,b)+1;
    }
    
    bool isBalanced(TreeNode* root) {
        bool check = 1;
        HeightandCheck(root, check);
        return check;
    }
};
