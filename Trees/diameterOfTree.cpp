#include <iostream>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        findMax(root, maxi);
        return maxi;
    }

private:
    int findMax(TreeNode* node, int& maxi) {
        if (node == nullptr) {
            return 0;
        }

        int lh = findMax(node->left, maxi);
        int rh = findMax(node->right, maxi);

        maxi = max(maxi, lh + rh);

        return 1 + max(lh, rh);
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution sol;
    int diameter = sol.diameterOfBinaryTree(root);
    
    cout << diameter << endl;

    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}