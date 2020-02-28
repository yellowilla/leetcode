/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int length = nums.size();
        TreeNode* root = devide(nums, 0, length - 1);
        return root;
    }

    TreeNode* devide(vector<int> nums, int l, int r)
    {
        if (l > r)
        {
            TreeNode* res = NULL;
            return res;
        }

        int mid = (l + r) / 2;
        TreeNode* res = new TreeNode(nums[mid]);
        res->left = devide(nums, l, mid - 1);
        res->right = devide(nums, mid + 1, r);

        return res;
    }
};
