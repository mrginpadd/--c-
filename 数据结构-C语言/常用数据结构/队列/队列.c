//
//  队列.c
//  数据结构-C语言
//
//  Created by xushihao on 2023/9/12.
//

#include "队列.h"


QueueNode *CreateQueue(int maxSize) {
    QueueNode *queue = (QueueNode*)malloc(sizeof(QueueNode));
    queue -> maxSize = maxSize;
    queue -> data = (int*)malloc(sizeof(int)*maxSize);
    queue -> front = -1;
    queue -> rear = -1;
    queue -> size = 0;
    return queue;
}

void QueuePush(QueueNode *queue, int item) {
    if (queue -> size >= queue -> maxSize) {
        printf("队列满了 maxSize: %d, size: %d", queue->maxSize, queue->size);
        return;
    }
    if (queue -> size == 0) {
        queue -> front = 0;
    }
    queue -> size ++;
    queue -> rear = (queue->rear + 1) % queue->maxSize;
    queue -> data[queue -> rear] = item;
}

//判断队列是否已满
int QueueIsFull(QueueNode queue) {
    return queue.maxSize == queue.size;
}


//判断队列S是否为空
int QueueIsEmpty(QueueNode queue) {
    return 0 == queue.size;
}

//删除并返回出队列元素
int QueuePop(QueueNode *queue) {
    if (queue -> size >= 1) {
        queue->size--;
        
        int e = queue->data[queue->front];
        queue->front = (queue->front + 1) % queue->maxSize;
        
        return e;
    } else {
        printf("队列为空 maxSize: %d, size: %d \n", queue->maxSize, queue->size);
        return -999;
    }
}
