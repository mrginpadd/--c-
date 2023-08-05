//
//  计算程序运行时间.c
//  数据结构-C语言
//
//  Created by xushihao on 2023/8/5.
//

#include "计算程序运行时间.h"
#include <stdio.h>
#include <time.h>
void countPragramRunTime_test(void) {
    clock_t start, stop;
    start = clock();
    
    for (int i=0;i<10000;i++) {
        printf("");
    }
    stop = clock();
    double duration = ((double)(stop - start))/CLOCKS_PER_SEC;
    printf("测试程序运行时间：%lf \n", duration);
    
}
