#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int search(struct Node *ptr)
{
    int n;
    printf("Enter the Node to be searched : ");
    scanf("%d", &n);
    while(ptr != NULL)
    {
         if (ptr -> data == n)
        {
            printf("%d is present",ptr -> data);
        }
        ptr = ptr -> next;

    }
}


//Insertion 
struct Node *insertatFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    head = ptr;
    return head;
}

struct Node *insertatIndex(struct Node *head, int data, int index)
{
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    p->next = ptr;
    ptr->next = p->next;
    ptr -> data = data;
    return head;

}

struct Node *insertatEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }

    ptr->next = NULL;
    p->next = ptr;
    return head;
}


// Deletion 
struct Node *deleteNodeinBetween(struct Node *head, int index)
{
    struct Node *p = head;
    int i = 0;
    while(i != index -1)
    {
        p = p->next;
        i++;
    }
    struct Node *q = p ->next;
    p ->next = q->next;
    free(q);
    return head;
}

struct Node *deletefirstNode(struct Node *head)
{
    struct Node *p ;
    head = head->next;
    free(p);
    return head;
}



/*Creation of Linked List and Performing its operation*/

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocate memory to this nodes of Linked List in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Link the data
    head->data = 7;
    head->next = second;

    second->data = 14;
    second->next = third;

    third->data = 21;
    third->next = NULL;

    printf("Linked List Before Deletion : \n");
    traversal(head);
    // insertatEnd(head, 23);
    // head = insertatFirst(head, 15);
    // head = insertatIndex(head, 44, 2);
    printf("Linked List After Deletion : \n");
    head = deleteNodeinBetween(head, 1);
    traversal(head);

    return 0;
}
