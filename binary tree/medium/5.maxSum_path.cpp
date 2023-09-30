Write a program to find the maximum sum path in a binary tree.
A path in a binary tree is a sequence of nodes where every adjacent pair of nodes are connected by an edge.
A node can only appear in the sequence at most once.A path need not pass from the root.
We need to find the path with the maximum sum in the binary tree.


/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int summation(BinaryTreeNode<int>*root,int& maxi){
        if(root==NULL)return 0;
        int ls=max(0, summation(root->left,maxi));
        int rs=max(0,summation(root->right,maxi));

        int val=root->data;

        maxi=max(maxi,(ls+rs)+val);


        return max(ls,rs)+val;


}

int maxPathSum(BinaryTreeNode<int> *root)
{
    int maxi=INT_MIN;
    summation(root, maxi);
    return maxi;

}

// Time Complexity: O(N).

// Reason: We are doing a tree traversal.

// Space Complexity: O(N)

// Reason: Space is needed for the recursion stack. In the worst case (skewed tree), space complexity can be O(N).