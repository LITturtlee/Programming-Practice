package com.wbw.leetcode;

import org.junit.Test;

import java.util.List;

/**
 * @Author: wbw
 * @Date: 2021/5/26 9:07
 */
public class 通过删除字母匹配到字典里最长单词524 {
    public String findLongestWord(String s, List<String> dictionary) {
        String longestStr = "";
        for(String traget: dictionary){
            if(traget.length()<longestStr.length()||(traget.length()==longestStr.length()&&traget.compareTo(longestStr)>0)){
                continue;
            }
            if(isValid(s,traget)){
                longestStr = traget;
            }
        }
        return longestStr;
    }

    public boolean isValid(String s, String traget){
        int len1 = s.length();
        int len2 = traget.length();
        int i = 0;
        int j = 0;
        while(i<len1&&j<len2){
            if(s.charAt(i)==traget.charAt(j)){
                j++;
            }
            i++;
        }
        return j==len2;
    }
}
