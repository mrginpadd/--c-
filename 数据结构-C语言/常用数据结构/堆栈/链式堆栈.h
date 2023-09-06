//
//  链式堆栈.h
//  数据结构-C语言
//
//  Created by xushihao on 2023/9/6.
//

#ifndef _____h
#define _____h

#include <stdio.h>
#include <stdlib.h>
#include "data_structures.h"

LinkStack *CreateLinkStack(void);
int IsLStackEmpty(LinkStack *s);
void PushLStack(int data, LinkStack *s);
int PopLStack(LinkStack *s);
#endif /* _____h */
