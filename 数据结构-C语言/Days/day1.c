//
//  day1.c
//  数据结构-C语言
//
//  Created by xushihao on 2023/8/5.
//

#include "day1.h"

void testFunc(void);
int testFunc2(void);

void day1(void) {
    //1.clock的使用，计算程序运行时间
//    countPragramRunTime_test();
    //2.测试用于计算函数运行时间的工具类
    XSHCountPragRunTime(testFunc2);
}

void testFunc(void) {
    for (int i = 0; i < 100000; i++) {
        
    }
}

int testFunc2(void) {
    for (int i = 0; i < 100000; i++) {
        
    }
    return 100;
}
