#include "main.h"

static Node *head1;
static Node *head2;

int main(void)
{
    head1 = (Node *)malloc(sizeof(Node));
//    createLinkedList();
//    printLinkedList(head1);
//    printf("Length of head1 is: %d\n",lengthOfList(head1));
    head2 = addNode(head2,0,123);
    printf("Length of head2 is: %d\n",lengthOfList(head2));
    printLinkedList(head2);
    head2 = addNode(head2,1,456);
    printf("Length of head2 is: %d\n",lengthOfList(head2));
    printLinkedList(head2);
    head2 = addNode(head2,2,789);
    head2 = addNode(head2,3,101112);
    head2 = addNode(head2,4,131415);
    head2 = addNode(head2,5,161718);
    printf("Length of head2 is: %d\n",lengthOfList(head2));
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
    if(listIsEmpty(temp))
    {
        printf("List is empty.\n");
        return;
    }
    while(!listIsEmpty(temp))
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

int lengthOfList(Node *list)
{
    int length = 0;
    Node *temp;
    temp = list;
    if(listIsEmpty(temp))
    {
        printf("List is empty.\n");
        return(length);
    }
    while(!listIsEmpty(temp))
    {
        length++;
        temp = temp->next;
    }
    return(length);
}

Node* addNode(Node *list,int pos,int data)
{
    Node *temp1;
    Node *temp2;
    if(listIsEmpty(list) && (pos == 0)) // List is empty and we want to add the head.
    {
        printf("List is empty. Adding head.\n");
        list = (Node *)malloc(sizeof(Node));
        list->data = data;
        return(list);
    }
    else
    {
        if(pos == 0) // List is not empty and we want to add at head.
        {
            temp1 = (Node *)malloc(sizeof(Node));
            temp1->next = list;
            temp1->data = data;
            list = temp1;
            return(list);
        }
        else
        {
            temp1 = list;
            if(pos > lengthOfList(temp1))
            {
                printf("Invalid Operation: Position exceeds length of list.\n");
                return(list);
            }
            else
            {
                if(pos == lengthOfList(temp1))
                {
                    temp2 = (Node *)malloc(sizeof(Node));
                    temp2->data = data;
                    temp2->next = NULL;
                    while(temp1->next != NULL)
                    {
                        temp1 = temp1->next;
                    }
                    temp1->next = temp2;
                    temp2 = NULL;
                    free(temp2);
                    return(list);
                }
            }
        }
    }
}