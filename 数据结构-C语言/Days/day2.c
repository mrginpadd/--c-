//
//  day2.c
//  数据结构-C语言
//
//  Created by xushihao on 2023/8/6.
//

#include "day2.h"


void day2(void) {
    // 1. 分治法思想
    int *a = generateRandomArray(20, 0, 100);
    printArray(a);
    int res = findMax(a, 0, 19);
    printf("利用分治法查找最大值 %d \n", res);
}
