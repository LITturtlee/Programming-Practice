package com.wbw.leetcode;

import org.junit.Test;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

/**
 * @Author: wbw
 * @Date: 2021/5/28 14:51
 */
public class Test01 {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        int number = Integer.parseInt(bufferedReader.readLine());
        bufferedReader.close();
        int cnt = 0;
        while (number != 1) {
            if (number % 2 != 0) number = 3 * number + 1;
            number /= 2;
            cnt++;
        }
        System.out.print(cnt);
    }
    @Test
    public void temp(){
        /**
         * 		-号左对齐，无符号 右对齐，数字，长度，很有用
         */
        int year = 2020;
        System.out.format("%-15s %5s %10s\n", "item","qty","price");
        System.out.format("%-15s %5s %10s\n", "----","---","-----");
        System.out.println("123456789123456789123456789123456789123456789");
        System.out.format("%-15.15s %5d %10.2f\n", "lalala",4,4.25);
        System.out.format("%08d%n",year);
    }

    @Test
    public void  te(){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while(n>0){
            int sum = 0;
            String a = sc.nextLine();
            String[] as = a.split(" ");
            for(int i=1;i<as.length;i++){
                sum = sum + Integer.parseInt(as[i]);
            }
            System.out.println(sum);
            n--;
        }
    }
}
