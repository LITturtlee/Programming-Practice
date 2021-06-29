package com.wbw.leetcode.tree;

import javax.swing.tree.TreeNode;
import java.util.ArrayList;
import java.util.List;

/**
 * @Author: wbw
 * @Date: 2021/6/3 19:23
 */
public class 二叉树的中序遍历94 {


public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode() {}
    TreeNode(int val) { this.val = val; }
    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

    class Solution {
        List<Integer> res = new ArrayList<>();
        public List<Integer> inorderTraversal(TreeNode root) {
            traversal(root);
            return res;
        }
        public void traversal(TreeNode node){
            if(node!=null){
                traversal(node.left);
                res.add(node.val);
                traversal(node.right);
            }
        }
    }
}
