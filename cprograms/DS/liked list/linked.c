#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
int findMax(struct node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return -1;
    }
    int max = head->data;
    while (head != NULL) {
        if (head->data > max) {
            max = head->data;
        }
        head = head->next;
    }
    return max;
}
int findMin(struct node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return -1;
    }
    int min = head->data;
    while (head != NULL) {
        if (head->data < min) {
            min = head->data;
        }
        head = head->next;
    }
    return min;
}
int findMiddle(struct node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return -1;
    }
    struct node* slow = head;
    struct node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}
void bubbleSort(struct node** headRef) {
    struct node *temp, *current;
    int swapped;
    do {
        swapped = 0;
        current = *headRef;
        while (current->next != NULL) {
            if (current->data > current->next->data) {
                // swap data of adjacent nodes
                temp = current->next;
                current->next = temp->next;
                temp->next = current;
                if (current == *headRef) {
                    *headRef = temp;
                }
                swapped = 1;
            }
            else {
                current = current->next;
            }
        }
    } while (swapped);
}
void printList(struct node* head) {
    while (head != NULL) {
        printf("%d->", head->data);
        head = head->next;
    }
}
void insertAtBeginning(struct node** headRef) {
    int data;
    printf("Enter data to insert: ");
    scanf("%d", &data);

    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = *headRef;
    *headRef = newNode;
}
void insertAtEnd(struct node** headRef) {
    int data;
    printf("Enter data to insert: ");
    scanf("%d", &data);
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }
    struct node* current = *headRef;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}
void insertAtMiddle(struct node** headRef) {
    int data, position;
    printf("Enter data to insert: ");
    scanf("%d", &data);
    printf("Enter position to insert: ");
    scanf("%d", &position);

    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if (position == 1) {
        newNode->next = *headRef;
        *headRef = newNode;
        return;
    }
    struct node* current = *headRef;
    for (int i = 1; i < position-1 && current != NULL; i++) {
        current = current->next;
    }

    if (current == NULL) {
        printf("Invalid position!\n");
        return;
    }
    newNode->next = current->next;
    current->next = newNode;
}
void deleteAtBeginning(struct node** headRef) {
    if (*headRef == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct node* temp = *headRef;
    *headRef = (*headRef)->next;
    free(temp);
}
void deleteAtMiddle(struct node** headRef) {
    if (*headRef == NULL) {
        printf("List is empty!\n");
        return;
    }
    int position;
    printf("\nEnter position to delete (1-indexed): ");
    scanf("%d", &position);
    if (position == 1) {
        deleteAtBeginning(headRef);
        return;
    }
    struct node* prev = *headRef;
    struct node* current = (*headRef)->next;
    for (int i = 2; current != NULL && i < position; i++) {
        prev = current;
        current = current->next;
    }
    if (current == NULL) {
        printf("Invalid position!\n");
        return;
    }
    prev->next = current->next;
    free(current);
}
void deleteAtEnd(struct node** headRef) {
    if (*headRef == NULL) {
        printf("List is empty!\n");
        return;
    }
    if ((*headRef)->next == NULL) {
        free(*headRef);
        *headRef = NULL;
        return;
    }
    struct node* prev = *headRef;
    struct node* current = (*headRef)->next;
    while (current->next != NULL) {
        prev = current;
        current = current->next;
    }
    prev->next = NULL;
    free(current);
}
int main() {
    struct node* head = NULL;
    int n,c;
    while(1){
    printf("\nEnter Your Choice:");
    printf("\n1.Create the List");
    printf("\n2.Insert at Beginning");
    printf("\n3.Insert at Position");
    printf("\n4.Insert at Ending");
    printf("\n5.Deletion at Beginning");
    printf("\n6.Deletion at Position");
    printf("\n7.Deletion at Ending");
    printf("\n8.Print the List");
    printf("\n9.To find the Maximum Element in the list");
    printf("\n10.To find the Minimum Element in the list");
    printf("\n11.To find the Middle Element in the list");
    printf("\n12.To sort the list");
    printf("\n13.Exit");
    printf("\nChoice:");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
        for (int i = 0; i < n; i++) {
        int data;
        printf("Enter the data for node %d: ", i+1);
        scanf("%d", &data);
        struct node* newNode = (struct node*) malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
        } else {
            struct node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }
        printf("The linked list is: ");
        printList(head);
        break;
    case 2:
    printf("Inserting node at beginning...\n");
    insertAtBeginning(&head);
    printList(head);
        break;
    case 3:
    printf("Inserting node at position...\n");
    insertAtMiddle(&head);
    printList(head);
        break;
    case 4:
    printf("Inserting node at end...\n");
    insertAtEnd(&head);
    printList(head);
        break;
    case 5:
    printf("Deletion node at beginning...\n");
    deleteAtBeginning(&head);
    printList(head);
        break;
    case 6:
    printf("Deletion node at position...\n");
    deleteAtMiddle(&head);
    printList(head);
        break;
    case 7:
    printf("Deletion node at end...\n");
    deleteAtEnd(&head);
    printList(head);
        break;
    case 8:
    printf("The linked list is: ");
    printList(head);
        break;
    case 9:
    printf("\nThe Maximum Element is: %d...\n",findMax(head));
    printf("The linked list is: ");
    printList(head);
        break;
    case 10:
    printf("\nThe Minimum Element is: %d...\n",findMin(head));
    printf("The linked list is: ");
    printList(head);
        break;
    case 11:
    printf("\nThe Middle Element is: %d...\n",findMiddle(head));
    printf("The linked list is: ");
    printList(head);
        break;  
    case 12:
    bubbleSort(&head);
    printf("The Sorted linked list is: ");
    printList(head);
        break;     
    case 13:
        exit(1);
    default:
    printf("\nInvalid Choice....!\n");
        break;
    }
 }
	return(0);
}