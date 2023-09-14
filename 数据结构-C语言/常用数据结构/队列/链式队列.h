//
//  链式队列.h
//  数据结构-C语言
//
//  Created by xushihao on 2023/9/14.
//

#ifndef _____h
#define _____h

#include <stdio.h>
#include "data_structures.h"
#include <stdlib.h>

QLNode *CreateLQueue(void);
int DeleteQ(QLNode *PtrQ);
QLNode *PushQ(QLNode *PtrQ, int e);
int LQueueIsEmpty(QLNode *PtrQ);

#endif /* _____h */
