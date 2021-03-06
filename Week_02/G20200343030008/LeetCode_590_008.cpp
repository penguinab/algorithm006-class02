//给定一个 N 叉树，返回其节点值的后序遍历。
// 说明: 递归法很简单，你可以使用迭代法完成此题吗? Related Topics 树


//leetcode submit region begin(Prohibit modification and deletion)

/*
// Solution 1  迭代，使用 stack
class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> res;
        stack<Node*> s;
        if (root) {
            s.push(root);
        }
        while(!s.empty()) {
            Node *n = s.top();
            res.push_back(n->val);

            s.pop();
            int len= n->children.size();
            for (int i=0;i<len;i++) {
                if(n->children[i])
                    s.push(n->children[i]);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
 */

/*
    递归4部曲
    1、递归退出条件
    2、处理当前层
    3、处理下一层
    4、清理当前层
 */
class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> res;
        recursive(root, res);
        return res;
    }

private:
    void recursive(Node *n, vector<int> &v) {
        if (!n) {
            return;
        }
        if(!n->children.empty()){
            int size= n->children.size();
            for(int i=0;i<size;i++){
                Node *node=n->children[i];
                recursive(node,v);
            }
        }
        v.push_back(n->val);
    }
};
//leetcode submit region end(Prohibit modification and deletion)
