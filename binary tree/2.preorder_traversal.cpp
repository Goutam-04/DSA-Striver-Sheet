// ?Problem Statement
// ?Suggest Edit
// ?You are given a ‘Binary Tree’.
?
?
// ?Return the preorder traversal of the Binary Tree.
?
?
// ?Example:
// ?Input: Consider the following Binary Tree:
// ?Example
?
// ?Output: 
// ?Following is the preorder traversal of the given Binary Tree: [1, 2, 5, 3, 6, 4]
?
?
// ?Detailed explanation ( Input/output format, Notes, Images )
// ?keyboard_arrow_down
// ?Sample Input 1:
// ?1 2 3 5 4 6 7 -1 -1 -1 -1 -1 -1 -1 -1
?
?
// ? Sample Output 1:
// ?1 2 5 4 3 6 7

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
vector<int> ans;
void preorder(TreeNode<int>* node){
    if(node==NULL)return;
    ans.push_back(node->data);
    preorder(node->left);
    preorder(node->right);
}

// TreeNode<int>* means the pointer is an datatype of interger
vector<int> preOrder(TreeNode<int> * root){
preorder(root);
return ans;
}
