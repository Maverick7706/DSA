#include "main.h"

static Node *head1;
static Node *head2;

int main(void)
{
    head1 = (Node *)malloc(sizeof(Node));
    createLinkedList();
    printLinkedList(head1);
    addNode(head2,0);
    printLinkedList(head2);
    return 0;
}

void createLinkedList(void)
{
    Node *node1 = (Node *)malloc(sizeof(Node));
    Node *node2 = (Node *)malloc(sizeof(Node));
    Node *node3 = (Node *)malloc(sizeof(Node));
    Node *node4 = (Node *)malloc(sizeof(Node));

    head1->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    head1->data = 10;
    node1->data = 20;
    node2->data = 30;
    node3->data = 40;
    node4->data = 50;
}

bool listIsEmpty(Node *list)
{
    bool retVal = false;
    retVal = (list == NULL)?true:false;
    return(retVal);
}

void printLinkedList(Node *list)
{
    Node *temp;
    temp = list;
    while(!listIsEmpty(temp))
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

Node* addNode(Node *list,uint16_t pos)
{
    Node *temp1;
    if(listIsEmpty(list) && (pos == 0)) // List is empty and we want to add the head.
    {
        printf("List is empty. Adding head.\n");
        list = (Node *)malloc(sizeof(Node));
        return(list);
    }
    else
    {
        if(pos == 0) // List is not empty and we want to add at head.
        {
            temp1 = (Node *)malloc(sizeof(Node));
            temp1->next = list;
            list = temp1;
            return(list);
        }
        else
        {

        }
    }
}