#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// TC = O(h), SC = O(1)
TreeNode* searchBST(TreeNode* root, int val) {

    while (root != NULL && root->data != val) {

        if (val < root->data)
            root = root->left;
        else
            root = root->right;
    }

    return root;
}

int main() {

    // Construct the BST
    //
    //          5
    //        /   \
    //       3     7
    //      / \   / \
    //     2   4 6   8

    TreeNode* root = new TreeNode(5);

    root->left = new TreeNode(3);
    root->right = new TreeNode(7);

    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(8);

    // Search for value
    int val = 6;

    TreeNode* result = searchBST(root, val);

    if (result != NULL)
        cout << "Value " << val << " found in BST." << endl;
    else
        cout << "Value " << val << " not found in BST." << endl;

    return 0;
}