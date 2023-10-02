#include"string.h"
#include<stdio.h>
int main(){
    char s1[10],s2[10];
    int S;
    printf("enter a ,b values : ");
    gets(s1);
    gets(s2);
    S=strcpy(s1,s2);
      printf("%s",S);
    return 0;
}