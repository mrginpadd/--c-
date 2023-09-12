//
//  堆栈.h
//  数据结构-C语言
//
//  Created by xushihao on 2023/9/5.
//

#ifndef ___h
#define ___h

#include <stdio.h>
#include "data_structures.h"

Stack *CreateStack(int MaxSize);


//判断堆栈S是否已满
int IsFull(Stack S, int MaxSize);

//将元素item压入堆栈
void Push(Stack *S, int item);

//判断堆栈S是否为空
int IsEmpty(Stack S);

//删除并返回栈顶元素
int Pop(Stack *S);
#endif /* ___h */
