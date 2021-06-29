package com.wbw.leetcode.tree;

/**
 * @Author: wbw
 * @Date: 2021/6/8 14:10
 */
public class 二叉树展开为链表 {
    /**
     * Definition for a binary tree node.
     */
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


    /**
     * 思路：递归，每个树的右子树作为其左子树的右子树，再把左子树插到根节点的右子树上。
     */

    class Solution {
        public void flatten(TreeNode root) {
            if(root==null)return;
            flatten(root.left);
            flatten(root.right);
            // System.out.println(MainClass.treeNodeToString(root));
            if(root.left!=null||root.right!=null){
                // System.out.println(root.val);
                if(root.left!=null){
                    // System.out.println(root.val+" "+root.left.val+" "+root.right.val);
                    //直接接上会出问题，要递归的接到对应的子树上。
                    // root.left.right = root.right;
                    connect(root.left,root.right);
                    root.right = root.left;
                    root.left = null;
                    return;
                }

            }
        }
        public void connect(TreeNode root,TreeNode node){
            while(root.right!=null){
                root = root.right;
            }
            root.right = node;
        }
    }
}
