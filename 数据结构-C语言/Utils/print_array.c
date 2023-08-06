//
//  print_array.c
//  数据结构-C语言
//
//  Created by xushihao on 2023/8/6.
//

#include "print_array.h"

void printArray(int *arr) {
    int length = 0;
    // 计算数组长度
    while (arr[length] != '\0') {
        length++;
    }
    for (int i=0; i<length; i++) {
        printf("%d ", arr[i]);
    }
}
