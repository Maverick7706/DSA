#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

typedef struct myNode
{
    struct myNode *next;
    int data; // 4 bytes
}Node;


void createLinkedList(void);
void printLinkedList(Node *list);
void addNode(Node *list);

#endif