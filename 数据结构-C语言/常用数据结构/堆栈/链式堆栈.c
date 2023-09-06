//
//  链式堆栈.c
//  数据结构-C语言
//
//  Created by xushihao on 2023/9/6.
//

#include "链式堆栈.h"

LinkStack *CreateLinkStack(void) {
    // 构建一个堆栈的头节点，返回指针
    LinkStack *s = (LinkStack*)malloc(sizeof(LinkStack));
    s->next = NULL;
    return s;
}

int IsLStackEmpty(LinkStack *s) {
    return s->next == NULL;
}

void PushLStack(int data, LinkStack *s) {
    LinkStack *TmpCell;
    TmpCell = (LinkStack*)malloc(sizeof(LinkStack));
    TmpCell->data = data;
    TmpCell->next = s->next;
    s->next = TmpCell;
}

int PopLStack(LinkStack *s) {
    LinkStack *cell;
    int item;
    if (IsLStackEmpty(s)) {
        printf("堆栈空");
        return NULL;
    } else {
        cell = s->next;
        s->next = cell->next;
        item = cell->data;
        free(cell);
        return  item;
    }
}
