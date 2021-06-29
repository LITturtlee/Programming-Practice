package com.wbw.leetcode.tree;

import java.util.HashMap;
import java.util.Map;

/**
 * @Author: wbw
 * @Date: 2021/6/5 11:01
 */
public class 从中序与后序遍历序列构造二叉树106 {


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
        public TreeNode buildTree(int[] inorder, int[] postorder) {
            int length = postorder.length;
            //把中序存入map，免得每次都去查中序的根的位置
            Map<int,int> inorderMap = new  HashMap<>();
            Map<int,int> inorderMap = new HashMap<>();
            for(int i=0;i<inorder.length;i++){
                inorderMap.put(inorder[i],i);
            }
            TreeNode root = traverseBuild(postorder,length-1,0,inorderMap);
            return root;
        }

        public TreeNode traverseBuild(int[] postorder,int subRight,int subLeft, Map<int,int> inorderMap){
            TreeNode root = new TreeNode(postorder[subLeft]);
            return root;
        }

    }

}
