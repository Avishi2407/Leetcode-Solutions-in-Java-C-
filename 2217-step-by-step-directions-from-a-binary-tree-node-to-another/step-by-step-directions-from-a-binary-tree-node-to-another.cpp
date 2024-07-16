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
public:
    string getDirections(TreeNode* root, int startValue, int destValue) {
        vector<string> path_to_start, path_to_dest;
        findPathFromRoot(root, startValue, path_to_start);
        findPathFromRoot(root, destValue, path_to_dest);

        int common_len = 0;
        while (common_len < path_to_start.size() && common_len < path_to_dest.size() &&
               path_to_start[common_len] == path_to_dest[common_len]) {
            common_len++;
        }

        vector<string> directions(path_to_start.size() - common_len, "U");
        directions.insert(directions.end(), path_to_dest.begin() + common_len, path_to_dest.end());

        string result;
        for (const auto& dir : directions) {
            result += dir;
        }
        return result;
    }

private:
    bool findPathFromRoot(TreeNode* currentNode, int targetValue, vector<string>& path) {
        if (!currentNode) {
            return false;
        }
        if (currentNode->val == targetValue) {
            return true;
        }

        path.push_back("R");
        if (findPathFromRoot(currentNode->right, targetValue, path)) {
            return true;
        }
        path.pop_back();

        path.push_back("L");
        if (findPathFromRoot(currentNode->left, targetValue, path)) {
            return true;
        }
        path.pop_back();

        return false;
    }
};