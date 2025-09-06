#include <stdio.h>
#include "count.h"
#define len  10
/*   sizeof 不可以 在函数内，数组作为参数 传进来的   不能计算 出 占用 空间
 *  c = sizeof (a) /sizeof (a[0]);//在函数内 传入 数组参数 ，
 *  数组会退化成指针， 32位 一个指针占用 4字节  64位 占用8个字节   ，所以无法 用数组 类型判断 占用空间为多少*/
  int a[] = {53,56,88,12,69,100,42,18,47,52,10,17};
  int d[10];

int b,c,e;
char cc,m;
char *p = &cc;


int main0(void) {

//    c = sizeof (a) /sizeof (a[0]); //计算 数组 占空间

 /* scanf("%c",p);  //控制台 ，循环  给数组 d 赋值     scanf 赋值 不管字符 还是 数组  & 都要取 地址 ，字符 也要 ************
    scanf("%c",&m);  //控制台 ，循环  给数组 d 赋值     scanf 赋值 不管字符 还是 数组  & 都要取 地址 ，字符 也要 ************
   //  单独 赋值 其中一个 字符 都可以  两个都是 不行  或者 第 一个输 数字  第二个输 字符 ，   不可以输入两个字符  和 第一个 数字 ，第二个 字符 也不行 ，强制推出  */

    for(int i = 0; i < len ; i++){
    scanf("%d ",&d[i]); //控制台 ，循环  给数组 d 赋值     scanf 赋值 &要去地址 ，字符 也要
    }
     b= sort(d,len);

    printf("输入数值为：");
     for(int i = 0; i < len; i++){
     printf("%d ",d[i]);
    }  printf("\n");

    printf("最大数为：%d \n",b);

    BubbleSort(d, len);//冒泡 排序
    printf("排序后的数值为：");
    for(int i = 0; i < len; i++){
        printf("%d ",d[i]);
    }  printf("\n");

    return 0;
}
