#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

    
        if (p == NULL && q == NULL) {
            return true;
        }

        
        if (p == NULL || q == NULL) {
            return false;
        }

        
        if (p->val != q->val) {
            return false;
        }

        
        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};

int main() {

    // First tree
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);

    // Second tree
    TreeNode* q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);

    Solution obj;

    if (obj.isSameTree(p, q)) {
        cout << "The trees are same" << endl;
    }
    else {
        cout << "The trees are not same" << endl;
    }

    return 0;
}