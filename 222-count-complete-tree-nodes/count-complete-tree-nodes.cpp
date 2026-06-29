




// class Solution {
// private:
// //take o(logn)
//     int LeftHeight(TreeNode* root) {
//         int height = 0;
//         while (root) {
//             height++;
//             root = root->left;
//         }
//         return height;
//     }

// public:
//     int countNodes(TreeNode* root) {
//         if (root == nullptr) return 0;
        
//         int l = LeftHeight(root->left);
//         int r = LeftHeight(root->right);
//         // cout << l << r <<endl ;
       
//         if (l == r) {
//             // cout << l << r << endl ;
//             return (1 << l) + countNodes(root->right); // if not take power of 2^HEIGHT
//         } 
//         else {
//             return (1 << r) + countNodes(root->left);
//         }
//     }
// };

//totall tc o(logn)*logn




/// this is second solution easy to understand 
class Solution {
public:
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        
        int left_height = 0;
        TreeNode* left_ptr = root;
        while (left_ptr) {
            left_height++;
            left_ptr = left_ptr->left;
        }
        
        int right_height = 0;
        TreeNode* right_ptr = root;
        while (right_ptr) {
            right_height++;
            right_ptr = right_ptr->right;
        }
        
        if (left_height == right_height) {
            return (1 << left_height) - 1;
        }
        
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};