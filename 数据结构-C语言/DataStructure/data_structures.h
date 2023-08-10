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

#endif /* data_structures_h */
