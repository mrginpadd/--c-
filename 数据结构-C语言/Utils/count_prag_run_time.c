//
//  count_prag_run_time.c
//  数据结构-C语言
//
//  Created by xushihao on 2023/8/5.
//

#include "count_prag_run_time.h"
#include <time.h>


/// 用来计算程序的运行时间
/// - Parameter func: 入参1： 函数
void XSHCountPragRunTime(void (*func)(void)) {
    clock_t start, end;
    start = clock();
    for(int i = 0; i < 1000; i++) {
        func(); //传入函数重复执行1k次，防止传入函数的执行时间小于1个时钟周期导致得到的时间为0
    }
    end = clock();
    double duration = ((double)(end - start)) / CLOCKS_PER_SEC / 1000;
    printf("程序运行时间：%s %lf秒 \n", __func__, duration);
}
