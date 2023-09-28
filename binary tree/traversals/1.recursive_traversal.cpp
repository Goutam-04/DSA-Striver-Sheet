// ?Problem Statement
// ?Suggest Edit
// ?You have been given a Binary Tree of 'N'
// ?nodes, where the nodes have integer values.



// ?Your task is to return the ln-Order, Pre-Order, and Post-Order traversals of the given binary tree.


// ?For Example :
// ?For the given binary tree:
// ?Binary - Tree1

// ?The Inorder traversal will be [5, 3, 2, 1, 7, 4, 6].
// ?The Preorder traversal will be [1, 3, 5, 2, 4, 7, 6].
// ?The Postorder traversal will be [5, 2, 3, 7, 6, 4, 1].


// ?answer

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


vector<int>rem;
void preorder(TreeNode* node){
 
 if (node==NULL) return;
 rem.push_back(node->data);
 preorder(node->left);
 preorder(node->right);

}
vector<int>preOrderData(TreeNode *root){
    rem.clear();
    preorder(root);
    return rem;
}
void postorder(TreeNode* node){
 
 if (node==NULL) return;
 postorder(node->left);
 postorder(node->right);
 rem.push_back(node->data);

}
vector<int>postOrderData(TreeNode *root){
    rem.clear();
    postorder(root);
    return rem;
}
void inorder(TreeNode* node){
 
 if (node==NULL) return;
 inorder(node->left);
 rem.push_back(node->data);
 inorder(node->right);

}
vector<int>inOrderData(TreeNode *root){
    rem.clear();
    inorder(root);
    return rem;
}


vector<vector<int>> getTreeTraversal(TreeNode *root){
    vector<vector<int>>ans(3);

ans[0]=inOrderData(root);
ans[1]=preOrderData(root);
ans[2]=postOrderData(root);
    
   
    return ans;
    
}