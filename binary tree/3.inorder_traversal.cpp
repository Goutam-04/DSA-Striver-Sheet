You have been given a Binary Tree of 'n' nodes, where the nodes have integer values. Your task is to return the In-Order traversal of the given binary tree.


For Example :
For the given binary tree:


The Inorder traversal will be [5, 3, 2, 1, 7, 4, 6].
Detailed explanation ( Input/output format, Notes, Images )
keyboard_arrow_down
Sample Input 1 :
1 2 3 -1 -1 -1  6 -1 -1
Sample Output 1 :
2 1 3 6
Explanation Of Sample Output 1 :
The given binary tree is shown below:




/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

vector<int> ans;
void inorder(TreeNode *node) {
  if (node == NULL)
    return;
  inorder(node->left);
  ans.push_back(node->data);
  inorder(node->right);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    inorder(root);
    return ans;
    // Write your code here.
}