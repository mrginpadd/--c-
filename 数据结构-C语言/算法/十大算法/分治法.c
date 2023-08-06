//
//  分治法.c
//  数据结构-C语言
//
//  Created by xushihao on 2023/8/6.
//

#include "分治法.h"

/**
 分而治之，假设有一个无序的整数集合 a[n]，需要找到其最大值。
 */

int findMax(int *a, int start, int end) {
    int mid = (start + end) / 2;
    if (start == end) {
        // 基本情况：集合只包含一个元素时，直接返回该元素
        return a[start];

    }
    return max(findMax(a, start, mid), findMax(a, mid + 1, end));
}

