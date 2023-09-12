//
//  队列.h
//  数据结构-C语言
//
//  Created by xushihao on 2023/9/12.
//

#ifndef ___h
#define ___h

#include <stdio.h>
#include "data_structures.h"
#include <stdlib.h>
QueueNode *CreateQueue(int maxSize);

void QueuePush(QueueNode *queue, int item);

//判断队列是否已满
int QueueIsFull(QueueNode queue);

//将元素item压入队列
void QueuePush(QueueNode *queue, int item);

//判断队列是否为空
int QueueIsEmpty(QueueNode queue);

//删除并返回队首元素
int QueuePop(QueueNode *queue);

#endif /* ___h */
