// You are given a Binary Tree.
// Return the length of the diameter of the tree.

// The diameter of a binary tree is the length of the longest path between any two end nodes in a tree.

// The number of edges between two nodes represents the length of the path between them.



class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }

private:
    int height(TreeNode* node, int& diameter) {

        if (!node) {
            return 0;
        }

        int lh = height(node->left, diameter);
        int rh = height(node->right, diameter);

        diameter = max(diameter, lh + rh);

        return 1 + max(lh, rh);
    }
};

// Time Complexity: O(N) 

// Space Complexity: O(1) Extra Space + O(H) Recursion Stack space (Where “H”  is the height of binary tree ) 