//
//  链式队列.c
//  数据结构-C语言
//
//  Created by xushihao on 2023/9/14.
//

#include "链式队列.h"

QLNode *CreateLQueue(void) {
    QLNode *q = (QLNode*)malloc(sizeof(QLNode));
    q->front = NULL;
    q->rear = NULL;
    return q;
}

//出队
int DeleteQ(QLNode *PtrQ) {
    struct QNode *frontNode;
    int e;
    
    if (PtrQ -> front == NULL) {
        printf("队列空, 无法删除 \n");
        return -999;
    }
    
    frontNode = PtrQ -> front;
    if (PtrQ->front == PtrQ->rear) {
        PtrQ->front = PtrQ->rear = NULL;
    } else {
        PtrQ->front = PtrQ->front->next;
    }
    
    e = frontNode->data;
    free(frontNode);
    printf("出队元素 %d \n", e);
    return e;
}


//入队
QLNode *PushQ(QLNode *PtrQ, int e) {
    // 然后可以使用它
    struct QNode *rearNode = (struct QNode *)malloc(sizeof(struct QNode));
    rearNode->data = e;
    rearNode->next = NULL;
    
    if (PtrQ -> rear == NULL) {
        printf("原来的队列为空 \n");
        PtrQ->rear = PtrQ->front = rearNode;
    } else {
        PtrQ->rear->next = rearNode;
        PtrQ->rear = rearNode;
    }
    
    
    return PtrQ;
}




//判断队列S是否为空
int LQueueIsEmpty(QLNode *PtrQ) {
    return PtrQ->rear == NULL;
}
