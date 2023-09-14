//
//  day7.c
//  数据结构-C语言
//
//  Created by xushihao on 2023/9/14.
//

#include "day7.h"

void day7(void) {
    QLNode *LQueue = CreateLQueue();
    printf("队列是否为空 : %d \n", LQueueIsEmpty(LQueue));
    DeleteQ(LQueue);
    LQueue = PushQ(LQueue, 6);
    LQueue = PushQ(LQueue, 5);
    LQueue = PushQ(LQueue, 3);
    LQueue = PushQ(LQueue, 2);
    DeleteQ(LQueue);
    DeleteQ(LQueue);
    DeleteQ(LQueue);
    DeleteQ(LQueue);
    DeleteQ(LQueue);
    DeleteQ(LQueue);
}
