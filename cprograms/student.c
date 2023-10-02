#include<stdio.h>
#include<string.h>
struct student
{
    char roll[100];
    char name[20];
    int marks;
    float percentage;
};
int main(){
    struct student s;
    printf("enter student rollno: ");
    scanf("%s",&s.roll);
    printf("enter student name: ");
    scanf("%s",&s.name);
    printf("enter student marks: ");
    scanf("%d",&s.marks);
    s.percentage =s.marks/2;
    printf("percentage is: %f\n",s.percentage);
    return 0;  
}