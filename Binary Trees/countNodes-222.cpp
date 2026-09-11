#include<iostream>
#include<queue>
using namespace std;
struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// TC = O(n), SC = O(h)
int leftHeight(TreeNode* node) {
    int lheight = 0;
    while (node) {
        lheight++;
        node = node->left;
    }
    return lheight;
}
int rightHeight(TreeNode* node) {
    int rheight = 0;
    while (node) {
        rheight++;
        node = node->right;
    }
    return rheight;
}
int countNodes(TreeNode* root) {
    if (root == NULL)
        return 0;

    int lh = leftHeight(root);
    int rh = rightHeight(root);

    if (lh == rh)
        return (1 << lh) - 1;

    return 1 + countNodes(root->left) + countNodes(root->right);
}
int main(){
   // Construct a Complete Binary Tree
    //
    //         1
    //       /   \
    //      2     3
    //     / \   / \
    //    4   5 6   7
    //   / \
    //  8   9

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    root->left->left->left = new TreeNode(8);
    root->left->left->right = new TreeNode(9);

    cout<<countNodes(root);
    return 0;
}