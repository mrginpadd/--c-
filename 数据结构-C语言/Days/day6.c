//
//  day6.c
//  数据结构-C语言
//
//  Created by xushihao on 2023/9/12.
//

#include "day6.h"

void day6(void) {
    QueueNode *queue = CreateQueue(5);
    printf("队列是否为空 %d \n", QueueIsEmpty(*queue));
    QueuePush(queue, 5);
    QueuePush(queue, 4);
    QueuePush(queue, 33);
    QueuePush(queue, 22);
    QueuePush(queue, 11);
    printf("队列是否为空 %d \n", QueueIsEmpty(*queue));
    printf("队列是否满 %d \n", QueueIsFull(*queue));
    
    printf("出队元素 %d \n", QueuePop(queue));
    printf("出队元素 %d \n", QueuePop(queue));
    printf("出队元素 %d \n", QueuePop(queue));
    printf("出队元素 %d \n", QueuePop(queue));
    printf("出队元素 %d \n", QueuePop(queue));
    printf("出队元素 %d \n", QueuePop(queue));
}
