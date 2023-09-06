//
//  day5.c
//  数据结构-C语言
//
//  Created by xushihao on 2023/9/6.
//

#include "day5.h"

void day5(void) {
    LinkStack *s = CreateLinkStack();
    printf("栈是否为空 %d \n", IsLStackEmpty(s));
    PushLStack(5, s);
    PushLStack(4, s);
    PushLStack(3, s);
    printf("移除栈顶元素 %d \n", PopLStack(s));
    printf("移除栈顶元素 %d \n", PopLStack(s));
    printf("移除栈顶元素 %d \n", PopLStack(s));
    printf("移除栈顶元素 %d \n", PopLStack(s));
}
