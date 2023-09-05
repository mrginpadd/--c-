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

#endif /* data_structures_h */
