#include <stdio.h>
#define n 5
int top = -1;
int stack[n];
void push(int x)
{
    if (top == n - 1)
    {
        printf("overflow\n");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void pop(){
    int y;
    if (top==-1)
        printf("underflow");
    else{
        y = stack[top];
        top--;
        printf("the popped item is %d",y);
    }
}
void display(){
    int i;
    if (top == -1){
        printf("the stack is empty");
    }
    printf("the data is stack is \n");
        for ( i = top; i >= 0; i--){
            printf("%d\n",stack[i]);
        }    
    
}
int main()
{
    int choice,x;
   
    do
    {
        printf("\nenter your choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:push(x);
                 printf("enter data:");
                scanf("%d",&x);
            break;
        case 2:pop();
            break;
        case 3: display();
            break;
        }
    } while (choice >= 1 && choice <= 3);
    return 0;
}