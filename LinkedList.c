// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node *next;
// };

// void traversal(struct Node *ptr)
// {
//     while(ptr != NULL)
//     {
//      printf("Element : %d\n", ptr->data);
//      ptr = ptr -> next;
//     }

// }

// int search(struct Node *ptr)
// {
//     int n;
//     printf("Enter the Node to be searched : ");
//     scanf("%d", &n);
//     while(ptr != NULL)
//     {
//          if (ptr -> data == n)
//         {
//             printf("%d is present",ptr -> data);
//         }
//         ptr = ptr -> next;
    
//     }
// }


/*Creation of Linked List and Performing its operation 

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    //Allocate memory to this nodes of Linked List in Heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    //Link the data 
    head -> data = 7;
    head -> next = second;

    second -> data = 14;
    second -> next = third;

    third -> data = 21;
    third -> next = NULL;

    return 0;
}

*/