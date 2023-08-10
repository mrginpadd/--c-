//
//  单链表.c
//  数据结构-C语言
//
//  Created by xushihao on 2023/8/9.
//

#include "单链表.h"
#include <stdlib.h>



//1. 表长度
int Length(List ptrL) {
    List p = ptrL;
    int j = 0;
    while(p) {
        p = p->next;
        j++;
    }
    return j;
}

//2. 按序号查找
List FindKth(int k, List ptrL) {
    int j = 1;
    List p = ptrL;
    
    while(j < k && p != NULL) {
        p = p->next;
        j++;
    }
    
    return j == k ? p : NULL;
}

//3. 按值查找
List FindX(int x, List ptrL) {
    List p = ptrL;
    
    while(p->data != x && p->next != NULL) {
        p = p->next;
    }
    return p -> data == x ? p : NULL;
}

//4. 插入节点 i = 1 - len+1
List insertNode(int i, int val, List ptrL) {
    if (i < 1 || i > Length(ptrL) + 1) {
        return ptrL;
    }
    
    List node = (List)malloc(sizeof(struct LinkNode));
    node->data = val;
    
    if (i == 1) {
        node->next = ptrL;
        return node;
    }
    
    List p = FindKth(i - 1, ptrL);
    if (p == NULL) {
        return NULL;
    }

    
    node->next = p->next;
    p->next = node;
    
    return ptrL;
}

// 5. 删除节点 i = 1-n
List deleteNode(int i, List ptrL) {
    List preNode, node;

    if (i == 1) {
        node = ptrL;
        if (ptrL != NULL) {
            ptrL = ptrL->next;
            free(node);
        }
        return ptrL;
    }
    preNode = FindKth(i - 1, ptrL);
    
    if (preNode != NULL && preNode->next != NULL) {
        node = preNode->next;
        preNode->next = node->next;
        free(node);
        return ptrL;
    } else {
        return NULL;
    }
}


void printList(List ptrL) {
    printf("链表如下： ");
    if (ptrL == NULL) {
        printf("NULL ");
    }
    List p = ptrL;
    while(p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

