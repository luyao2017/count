/*
// Created by 82187 on 2024/7/3.

  srand((unsigned)time(NULL)); //随时间变化的，随机数种子
 int a = rand() % 10; //产生0~9的随机数，注意10会被整除
 int a = rand() % 51 + 13; //产生13~63的随机数

 void delay(int milliseconds) {
    clock_t start_time = clock();  // 获取开始时间
    while (clock() < start_time + milliseconds);  // 等待时间过去
}

*/
#include "stdio.h"
#include <stdlib.h>
#include <time.h>
#include "windows.system.h"



#define Num 20

void delay(int milliseconds) {
    clock_t start_time = clock();  // 获取开始时间
    while (clock() < start_time + milliseconds);  // 等待时间过去
}



int array[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int ran,timep,len = 1;
int main()
{ //delay(500);

    srand((unsigned)time(NULL)); //随时间变化的，随机数



    for (int i = 0; i <Num ; i++) {
        for (int jj = 0; jj< len ; jj++) {
            printf("* ");
        }   printf("\n");
        len = array[i];
    }

   /* printf("nihao\n");
    delay(2000);
    system("cls");*/

  //  system("pause");


    while (array[0] <array[1] && array[9] <array[10] && array[18] <array[19] ) {
        for (int i = 0; i < len - 1; i++) { // 大循环的次数 是总数 - 1   1-10 个数 ，只要 1和 9个数 对比 即可  ，所以 减一
            for (int j = 0;
                 j < len - i - 1; j++) { //每次循环 ，都会判 排出正确的顺序，所以 每循环一次 ，就少一次  第一次排序一个 剩余  9个未排序   第二次排序 2 个 剩余 8 个未排序
                if (array[j] > array[j + 1]) //判断 ，如果 第 0个数 大于 第 1个数，  2 > 1  进去交换    如果 不大于 就是 1 < 2 则不做交换 ，跳过
                {    ran = rand()%Num;
                    timep = array[ran];
                    array[ran] = array[j]; // 把 0号，大的数 赋值 零时变量 ，
                    array[j] = timep; //把 1号，小的数 赋值 给 0 号数

                }

                for (int ii = 0; ii < Num; ii++) {
                    len = ran;
                    for (int jj = 0; jj < len; jj++) {
                        printf("* ");
                    }
                    printf("\n");

                }
                delay(500);
                system("cls");
            }
        }
    }






    return 0;
}