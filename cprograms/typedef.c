#include<stdio.h>
int main(){
int a=20;
int *p;
p=&a;
*p++;
printf("%d",*p);
return 0;
}