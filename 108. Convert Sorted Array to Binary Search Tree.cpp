/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
    TreeNode* arrayToBst(vector<int> &nums,int begin,int end){
        if(begin > end) return nullptr;
        int mid = (begin+end)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = arrayToBst(nums,begin,mid-1);
        root->right = arrayToBst(nums,mid+1,end);
        return root;

    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return arrayToBst(nums,0,nums.size()-1);
    }
};
