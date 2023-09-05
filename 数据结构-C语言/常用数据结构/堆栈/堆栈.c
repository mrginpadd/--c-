//
//  堆栈.c
//  数据结构-C语言
//
//  Created by xushihao on 2023/9/5.
//

#include "堆栈.h"
#include <stdio.h>
#include <stdlib.h>
//生成空堆栈，最大长度为maxSize
Stack *CreateStack(int MaxSize) {
    Stack *s = (Stack*)malloc(sizeof(Stack));
    s -> data = (int*)malloc(sizeof(int)*MaxSize);
    s -> top = -1;
    s -> maxSize = MaxSize;
    return s;
}

//判断堆栈S是否已满
int IsFull(Stack S, int MaxSize) {
    return S.top == MaxSize - 1;
}

//将元素item压入堆栈
void Push(Stack *S, int item) {
    if (S->top == S->maxSize - 1) {
        printf("堆栈满");
        return;
    }
    S->data[++(S->top)] = item;
}

//判断堆栈S是否为空
int IsEmpty(Stack S) {
    return S.top == -1;
}

//删除并返回栈顶元素
int Pop(Stack *S) {
    if (S -> top == -1) {
        return -1;
    } else {
        return S->data[S->top--];
    }
}
