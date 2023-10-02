#include"stdio.h"
#include"string.h"
int main(){
    int x;
    char s1[20],s2[20];
    printf("enter 2 strings");
    gets(s1);
    gets(s2);
    x=strcmp(s1,s2);
    if(x==0){
    printf("s1 and s2 are equal");
    }
    else if (x==1){
    printf("s1>s2");
    } 
    else
    printf("s1<s2");}