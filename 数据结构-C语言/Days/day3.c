//
//  day3.c
//  数据结构-C语言
//
//  Created by xushihao on 2023/8/9.
//

#include "day3.h"

void day3(void) {
    // 1. 单链表
    List resList = (List)malloc(sizeof(struct LinkNode));
    resList->data = 1;
    //插入测试
    resList = insertNode(1, 6, resList);
    resList = insertNode(1, 5, resList);
    resList = insertNode(1, 7, resList);
    resList = insertNode(1, 8, resList);
    resList = insertNode(1, 2, resList);
    
    //打印测试
    printList(resList);
    
    //查询测试
    printf("查询元素 %d \n", FindX(2, resList)->data);
    
    //查询 i 测试
    printf("查询元素 %d \n", FindKth(1, resList)->data);
    
    //长度测试
    printf("表长度 %d \n", Length(resList));
    
    //删除节点测试
    resList = deleteNode(2, resList);
    
    resList = insertNode(1, 99, resList);
    printList(resList);
    
    
}
