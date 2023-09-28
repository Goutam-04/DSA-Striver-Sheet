 Find the Maximum Depth of Binary Tree. Maximum Depth is the count of nodes of the longest path from the root node to the leaf node.
Examples:
Input Format: Given the root of Binary Tree
Result: 4
Explanation: Maximum Depth in this tree is 4 if we follow path 5 – 1 – 3 – 8 or 5 – 1 – 3 – 11


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

int heightOfBinaryTree(TreeNode<int> *root)
{
    if(root==NULL)return 0;

    int lh=heightOfBinaryTree(root->left);
    int rh=heightOfBinaryTree(root->right);

    return 1+max(lh,rh);
}
