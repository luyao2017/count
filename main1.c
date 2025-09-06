//
// Created by 82187 on 2024/7/3.
//  数组 倒置
#include "stdio.h"
#include "count.h"


//本地 git
//999999999999999999
//333
//怕怕怕怕怕怕怕怕怕怕怕怕怕




int array[] = {0,1,2,3,4,5,6,7,8,9};
int main1()
{
    printf("数组：\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ",array[i]);
    }   printf("\n");

   Array_Reverse(array,10);//数组 ，倒置 数值
   // BubbleSort(array, 10);//冒泡 排序
    printf("数组倒置后：\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ",array[i]);
    }   printf("\n");

    return 0;
}