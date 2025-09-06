//
// Created by 82187 on 2024/7/2.
//
/*#include "stdio.h"
#include "stdlib.h"
#include <time.h>*/

  int  sort(int *arr,int len) //传入 数组 和 个数 计算出 那个数最大
{ int Num ;
  //  c = sizeof (a) /sizeof (a[0]);  在函数内 传入 数组参数 ，   数组会退化成指针， 32位 一个指针占用 4字节  64位 占用8个字节   ，所以无法 用数组 类型判断 占用空间为多少
    for (int i = 0; i < len; i++) { //所有数值，遍历一边
        if(arr[i] > arr[i+1] ) { //如果 数值 1 和 数值 2 判断  10 > 9
            if (Num < arr[i + 1]) // 如果  9 < Num(初始为0 )
                Num = arr[i]; // 把 数值 1 最大的数 10 赋值 Num
        }
        if(arr[i] < arr[i+1] ) { // //如果 数值 1 和 数值 2 判断  9 < 10
            if (Num < arr[i + 1]) // 如果  9 < Num(初始为0 )
                Num = arr[i+1]; //把 数值 2 最大的数 10 赋值 Num
        }
    }
 return Num;
}

void BubbleSort(int * arr,int len)//冒泡 排序
{  int tiemp;
    for (int i = 0; i < len-1; i++) { // 大循环的次数 是总数 - 1   1-10 个数 ，只要 1和 9个数 对比 即可  ，所以 减一
        for (int j = 0; j < len-i-1; j++) { //每次循环 ，都会判 排出正确的顺序，所以 每循环一次 ，就少一次  第一次排序一个 剩余  9个未排序   第二次排序 2 个 剩余 8 个未排序
            if(arr[j] > arr[j+1]) //判断 ，如果 第 0个数 大于 第 1个数，  2 > 1  进去交换    如果 不大于 就是 1 < 2 则不做交换 ，跳过
            {
                tiemp = arr[j]; // 把 0号，大的数 赋值 零时变量 ，
                arr[j] = arr[j+1]; //把 1号，小的数 赋值 给 0 号数
                arr[j+1] = tiemp;  //把 再把 大的数 ，赋值到 1 号数
            }
        }
    }
}

/*void MonkeySort(int * arr,int len)//猴子 排序
{  int tiemp;
    for (int i = 0; i < len-1; i++) { // 大循环的次数 是总数 - 1   1-10 个数 ，只要 1和 9个数 对比 即可  ，所以 减一
        for (int j = 0; j < len-i-1; j++) { //每次循环 ，都会判 排出正确的顺序，所以 每循环一次 ，就少一次  第一次排序一个 剩余  9个未排序   第二次排序 2 个 剩余 8 个未排序
            if(arr[j] > arr[j+1]) //判断 ，如果 第 0个数 大于 第 1个数，  2 > 1  进去交换    如果 不大于 就是 1 < 2 则不做交换 ，跳过
            {
                tiemp = arr[j]; // 把 0号，大的数 赋值 零时变量 ，
                arr[j] = arr[j+1]; //把 1号，小的数 赋值 给 0 号数
                arr[j+1] = tiemp;  //把 再把 大的数 ，赋值到 1 号数
            }
        }
    }
}*/



void  Array_Reverse(int * arr,int len)//数组 ，倒置 数值
{  int tiemp, Num = len-1;
    for (int i = 0; i < len/2; i++) { //
        tiemp  = arr[i] ;
        arr[i] = arr[Num];
        arr[Num] = tiemp;
        Num--;
    }
}