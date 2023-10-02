#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
int isEmpty(struct Node* top) {
    return (top == NULL);
}
void push(struct Node** top, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
    printf("Pushed element: %d\n", data);
}
int pop(struct Node** top) {
    if (isEmpty(*top)) {
        printf("Stack is empty\n");
        return -1;
    }
    struct Node* temp = *top;
    int poppedElement = temp->data;
    *top = (*top)->next;
    free(temp);
    return poppedElement;
}
void display(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    while (top != NULL) {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}
int main() {
    struct Node* top = NULL;
    push(&top, 1);
    push(&top, 2);
    push(&top, 3);
    display(top);
    printf("Popped element: %d\n", pop(&top));
    printf("Popped element: %d\n", pop(&top));
    display(top);
    return 0;
}