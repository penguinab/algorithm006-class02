//给定一个二叉树，返回它的中序 遍历。
//
// 示例:
//
// 输入: [1,null,2,3]
//   1
//    \
//     2
//    /
//   3
//
//输出: [1,3,2]
//
// 进阶: 递归算法很简单，你可以通过迭代算法完成吗？
// Related Topics 栈 树 哈希表


//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
//        List<Integer> res = new ArrayList<>();
////        traversal(root, res);
////        return res;


    }

    public void traversal(TreeNode root, List<Integer> res) {
        // 终止条件
        if (root.left != null) {
            traversal(root.left, res);
        }

        res.add(root.val);
        // 终止条件
        if (root.right != null) {
            traversal(root.right, res);
        }
    }

}
//leetcode submit region end(Prohibit modification and deletion)
