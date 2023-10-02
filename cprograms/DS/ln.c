#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
	struct node *next;
};
struct node *top=0;
void push(int x){
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=top;
		top=newnode;
}
void pop(){
	struct node *temp;
	temp = top->data;
	

}