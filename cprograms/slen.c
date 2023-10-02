#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100];
    int i;
    printf("\nEnter two strings  : ");
    gets(s1);
    gets(s2);
    i = strcmp(s1,s2);
    while(s1[i]!='\0'){
        s2[i]=s1[i];
        i++;
    }
    s2[i]='\0';
    printf("\nthe copied string is ");
    puts(s2);
    return 0;
}

