package com.wbw.leetcode.tree;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

/**
 * @Author: wbw
 * @Date: 2021/6/3 19:25
 */
public class 二叉树的层序遍历102 {
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



        public List<List<Integer>> levelOrder(TreeNode root) {
            List<List<Integer>> res = new ArrayList<List<Integer>>();
            if(root!=null){
                traverse(root,res);
            }
            return res;
        }

        public void traverse(TreeNode node,List<List<Integer>> res){
            Queue<TreeNode> queue = new LinkedList<>();
            queue.offer(node);
            int nums = 1;
            int nextNums = 0;
            List<Integer> temp = new ArrayList<>();
            while(!queue.isEmpty()){
                TreeNode currentNode = queue.poll();
                if(nums!=0){
                    temp.add(currentNode.val);
                    nums--;
                }else{
                    res.add(temp);
                    nums = nextNums;
                    nextNums = 0;
                    temp = new ArrayList<>();
                    temp.add(currentNode.val);
                    nums--;
                }
                if(currentNode.left!=null){
                    queue.offer(currentNode.left);
                    nextNums++;
                }
                if(currentNode.right!=null){
                    queue.offer(currentNode.right);
                    nextNums++;
                }
            }
            res.add(temp);
        }
    }

}
