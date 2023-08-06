//
//  random_array.c
//  数据结构-C语言
//
//  Created by xushihao on 2023/8/6.
//

#include "random_array.h"
int* generateRandomArray(int length, int min, int max) {
    int* array = (int*)malloc(length * sizeof(int)); // 分配内存空间
    srand(time(0)); // 设置随机数种子，使用当前时间作为种子
    
    for (int i = 0; i < length; i++) {
        array[i] = rand() % (max - min + 1) + min; // 生成 min 到 max 范围内的随机数
    }
    
    return array;
}
