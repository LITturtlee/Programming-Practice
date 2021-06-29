package com.wbw.leetcode;

/**
 * 循环不变量复习题
 * 26\27\283
 * @Author: wbw
 * @Date: 2021/5/26 10:30
 */
public class 颜色分类75 {
    public void sortColors(int[] nums) {
        int i = -1;
        int k = nums.length;
        int j = 0;
        //这里在nums[j]==2的情况扫描指针不应该继续，因为交换过后，扫描指针这个位置的值是多少需要重新排
        //为了避免又把2再换回去，所以要j<k
        while(j<k){
            if(nums[j]==0){
                swap(nums,++i,j++);
            }else if(nums[j]==2){
                swap(nums,--k,j);
            }else{
                j++;
                continue;
            }
        }

    }
    public void swap(int[] nums,int i, int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

}
