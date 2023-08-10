//
//  单链表.h
//  数据结构-C语言
//
//  Created by xushihao on 2023/8/9.
//

#ifndef ____h
#define ____h

#include <stdio.h>
#include "data_structures.h"

int Length(List ptrL);
List FindKth(int k, List ptrL);
List FindX(int x, List ptrL);
List insertNode(int i, int val, List prtL);
List deleteNode(int i, List ptrL);
void printList(List ptrL);
#endif /* ____h */
