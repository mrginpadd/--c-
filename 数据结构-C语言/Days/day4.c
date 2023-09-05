//
//  day4.c
//  数据结构-C语言
//
//  Created by xushihao on 2023/9/5.
//

#include "day4.h"

void day4(void) {
    Stack *s = CreateStack(20);
    printf("栈是否为空 %d \n", IsEmpty(*s));
    Push(s, 2);
    Push(s, 8);
    Push(s, 123);
    printf("栈长度 %d \n", s->top + 1);
    printf("移除栈顶元素 %d \n", Pop(s));
    printf("移除栈顶元素 %d \n", Pop(s));
    printf("移除栈顶元素 %d \n", Pop(s));
    printf("移除栈顶元素 %d \n", Pop(s));
}
