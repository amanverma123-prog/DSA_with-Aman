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
TreeNode* insertIntoBST(TreeNode* root, int val) {

    TreeNode* node = new TreeNode(val);

    if (root == NULL)
        return node;

    TreeNode* curr = root;

    while (true) {

        if (curr->data < val) {

            if (curr->right != NULL)
                curr = curr->right;
            else {
                curr->right = node;
                break;
            }

        } else {

            if (curr->left != NULL)
                curr = curr->left;
            else {
                curr->left = node;
                break;
            }
        }
    }

    return root;
}

// Inorder traversal
void inorder(TreeNode* root) {

    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
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

    // Insert value
    int val = 9;

    root = insertIntoBST(root, val);

    cout << "BST after insertion: ";

    inorder(root);

    return 0;
}