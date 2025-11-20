#include "main.h"

static Node *head;

int main(void)
{
    head = (Node *)malloc(sizeof(Node));
    createLinkedList();
    printLinkedList(head);
    return 0;
}

void createLinkedList(void)
{
    Node *node1 = (Node *)malloc(sizeof(Node));
    Node *node2 = (Node *)malloc(sizeof(Node));
    Node *node3 = (Node *)malloc(sizeof(Node));
    Node *node4 = (Node *)malloc(sizeof(Node));

    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    head->data = 10;
    node1->data = 20;
    node2->data = 30;
    node3->data = 40;
    node4->data = 50;
}

void printLinkedList(Node *list)
{
    Node *temp;
    temp = list;
    while(temp != NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}