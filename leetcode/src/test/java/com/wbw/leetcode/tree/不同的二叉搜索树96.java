package com.wbw.leetcode.tree;

/**
 * @Author: wbw
 * @Date: 2021/6/3 19:24
 */
public class 不同的二叉搜索树96 {
    class Solution {
        public int numTrees(int n) {
            int[] G = new int[n+1];
            G[0] = 1;
            G[1] = 1;

            for(int i=2;i<n+1;i++){
                for(int j=1;j<=i;j++){
                    G[i] += G[i-j] * G[j-1];
                }
            }
            return G[n];
        }
    }
}
