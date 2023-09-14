//
//  data_structures.h
//  数据结构-C语言
//
//  Created by xushihao on 2023/8/9.
//

#ifndef data_structures_h
#define data_structures_h

// 1.单链表
typedef struct LinkNode* List;

struct LinkNode {
    int data;
    List next;
};

// 2.堆栈
typedef struct {
    int top;  // 栈顶指针
    int *data;  //存储数据的数组
    int maxSize;  //栈的最大容量
} Stack;

// 链式堆栈
typedef struct {
    int data;
    struct LinkStack *next;
} LinkStack;


// 3.队列
typedef struct {
    int maxSize;
    int *data;
    int rear;
    int front;
    int size;
} QueueNode;

// 4. 链式队列

struct QNode{
    int data;
    struct QNode *next;
};

typedef struct {
    struct QNode *rear;
    struct QNode *front;
} QLNode;



#endif /* data_structures_h */





