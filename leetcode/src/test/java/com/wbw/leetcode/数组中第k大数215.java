package com.wbw.leetcode;

import org.junit.Test;

/**
 * @Author: wbw
 * @Date: 2021/5/26 8:46
 */

public class 数组中第k大数215 {
    @Test
    public int partition(int[] a, int r, int l){
        int x = a[r];
        int i = l - 1;
        for(int j = l; j < r ; j++){
            if(a[j]<x){
                swap(a,++i,j);
            }
        }
        swap(a,i+1,r);
        return i+1;
    }
    public void swap(int[] a, int idx1, int idx2){
        int temp = a[idx1];
        a[idx1] = a[idx2];
        a[idx2] = temp;
    }
}
