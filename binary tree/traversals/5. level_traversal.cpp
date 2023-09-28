You are given a ‘Binary Tree’.


Return the level-order traversal of the Binary Tree.


Example:
Input: Consider the following Binary Tree:
Example

Output: 
Following is the level-order traversal of the given Binary Tree: [1, 2, 3, 5, 6, 4]


Detailed explanation ( Input/output format, Notes, Images )
keyboard_arrow_down
Sample Input 1:
1 2 3 5 4 6 7 -1 -1 -1 -1 -1 -1 -1 -1


Sample Output 1:
1 2 3 5 4 6 7



/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> levelOrder(TreeNode<int> *root) {
  vector<int> ans;
  if (root == NULL)
    return ans;
  queue<TreeNode<int>*> rem;
  rem.push(root);

  while (!(rem.empty())) {
    TreeNode<int>*temp = rem.front();
    rem.pop();

    if (temp->left != NULL)
      rem.push(temp->left);
    if (temp->right != NULL)
      rem.push(temp->right);

      ans.push_back(temp->data);
  }

  return ans;
}
