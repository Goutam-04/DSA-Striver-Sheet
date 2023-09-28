You are given the root node of a binary tree.


Return 'true' if it is a height balanced binary tree.
Height of a tree is the maximum number of nodes in a path from the node to the leaf node.

An empty tree is a height-balanced tree. A non-empty binary tree is a height-balanced binary tree if
1. The left subtree of a binary tree is already the height-balanced tree.
2. The right subtree of a binary tree is also the height-balanced tree.
3. The difference between heights of left subtree and right subtree must not more than ‘1’.


/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/


// This missing & means that the height function does not take a
//  reference to the isBalanced variable, and any changes made to isBalanced
//  within the height function will not affect the original variable in
//   the isBalancedBT function.


int height(TreeNode<int>* root,bool& isBalanced){
    if(root==NULL)return 0;
    int lh=height(root->left,isBalanced);
    int rh=height(root->right,isBalanced);

    if(abs(lh-rh)>1)return isBalanced=false;
    

    return 1+max(lh,rh);
}

bool isBalancedBT(TreeNode<int>* root){
    if (root==NULL)return true;
    bool isBalanced=true;
 height(root,isBalanced); 


    return isBalanced;


    // Write your code here.
}