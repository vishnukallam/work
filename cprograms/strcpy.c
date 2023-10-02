#include<stdio.h>
int main(){
    char s1[10],s2[10];
    int i=0;
    printf("enetr 2 strings: ");
    gets(s1);
    gets(s2);
    while(s1[i]!='\0'){
        s2[i]=s1[i];
        i++;
    }
    s2[i]='\0';
    printf("%d\n",i);
    printf("the copied string = %s",s2);
    return 0; 
}