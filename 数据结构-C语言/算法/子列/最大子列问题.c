//
//  最大子列问题.c
//  数据结构-C语言
//
//  Created by xushihao on 2023/8/6.
//

#include "最大子列问题.h"

int MaxSubSeqSum(int *a) {
    int thisSum, maxSum;
    thisSum = 0;
    maxSum = INT_MIN;
    int length = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        thisSum += a[i];
        if (thisSum > maxSum) {
            maxSum = thisSum;
        } else if (thisSum < 0){
            thisSum = 0;
        }
    }
    // 如果全是负数，this上面得到的
    return maxSum;
}
