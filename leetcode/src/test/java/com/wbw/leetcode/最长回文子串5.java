package com.wbw.leetcode;

/**
 * @Author: wbw
 * @Date: 2021/5/26 15:49
 */
public class 最长回文子串5 {
    public String longestPalindrome(String s) {
        int len = s.length();
        if(len<2){
            return s;
        }
        int maxlen = 1;
        int begin = 0;
        int end = 0;
        boolean[][] dp = new boolean[len][len];
        for(int i=0;i<len;i++){
            dp[i][i] = true;
        }

        char[] charArray = s.toCharArray();
        for(int j=0;j<len;j++){
            for(int i=0;i<j;i++){
                if(i==j)continue;
                if(charArray[i]==charArray[j]&&(j-i<=2||dp[i+1][j-1])){
                    dp[i][j]=true;
                    if(j-i+1>maxlen){
                        maxlen = j - i + 1;
                        begin = i;
                        end = j;
                    }
                }else{
                    dp[i][j]=false;
                }
            }
        }
        return s.substring(begin,end+1);
    }
}
