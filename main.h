#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>

typedef struct myNode
{
    struct myNode *next; // 8 bytes
    int data; // 4 bytes
}Node;


void createLinkedList(void);
bool listIsEmpty(Node *list);
void printLinkedList(Node *list);
Node* addNode(Node *list,uint16_t pos); // pos is nth position from head (0 is head).

#endif