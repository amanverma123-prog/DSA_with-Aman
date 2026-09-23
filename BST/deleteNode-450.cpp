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

// TC = O(height of tree), SC = O(1)
TreeNode* findLastChild(TreeNode* root) {
    if (root->right == NULL)
        return root;
    return findLastChild(root->right);
}
TreeNode* helper(TreeNode* root) {
    if (root->left == NULL)
        return root->right;
    else if (root->right == NULL)
        return root->left;
    TreeNode* rightChild = root->right;
    TreeNode* lastRight = findLastChild(root->left);
    lastRight->right = rightChild;
    return root->left;
}
TreeNode* deleteNode(TreeNode* root, int key) {
    if (root == NULL)
        return NULL;
    if (root->data == key)
        return helper(root);
    TreeNode* dummy = root;
    while (root) {
        if (root->data > key) {
            if (root->left != NULL && root->left->data == key) {
                root->left = helper(root->left);
                break;
            } else
                root = root->left;
        } else {
            if (root->right != NULL && root->right->data == key) {
                root->right = helper(root->right);
                break;
            } else
                root = root->right;
        }
    }
    return dummy;
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

    // Insert dataue
    int key = 3;

    root = deleteNode(root, key);

    cout << "BST after deletion: ";

    inorder(root);

    return 0;
}