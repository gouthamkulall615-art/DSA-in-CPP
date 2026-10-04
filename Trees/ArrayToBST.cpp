#include <iostream>
#include <vector>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode *buildTree(vector<int> &nums, int start, int end)
{
    if (start >= end)
        return nullptr;

    int mid = (start + end) / 2;

    TreeNode *root = new TreeNode(nums[mid]);

    root->left = buildTree(nums, start, mid);
    root->right = buildTree(nums, mid + 1, end);

    return root;
}

TreeNode *sortedArrayToBST(vector<int> &nums)
{
    return buildTree(nums, 0, nums.size());
}

void inorder(TreeNode *root)
{
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main()
{
    vector<int> nums = {-10, -3, 0, 5, 9};

    TreeNode *root = sortedArrayToBST(nums);

    cout << "Inorder traversal: ";
    inorder(root);

    return 0;
}