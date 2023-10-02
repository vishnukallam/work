#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*root,*previous,*t,*new,*new_node,*p;
void create(){
    int ele;
    printf("this ia for creating a linked list");
    printf("\nenter the elements :");
    scanf("%d",&ele);
    while(ele != 10){
        new = (struct node *)malloc(sizeof(struct node));
        new->data = ele;
        new->next = NULL;
        if(root == NULL)
            root =new;
        else
            previous->next=new;
        previous = new;
        new->next = root;
        scanf("%d",&ele);
    }
}
void display(){
    t = root;
    printf("the list is :   ");
    while(t != NULL){
        printf("%d ->",t->data);
        t=t->next;
    }
}
void insert_beg(){
    int ele;
    printf("Enter one element to the new node:");
    scanf("%d",&ele);
    if (root == NULL)
        printf("The new node is not created");
    else{
        //root = p;
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = ele;
        new_node->next = root;
        root= new_node;
        
    }
    
}
void main(){
    int choice;
    do{
        printf("\n1.create");
        printf("\n2.display");
        printf("\n3.insert_beg");
        printf("\n4.exit");
        printf("\nenter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: create(); break;
            case 2: display();break;
            case 3: insert_beg();
        }
    }while (choice>=1 && choice<=3);  
}