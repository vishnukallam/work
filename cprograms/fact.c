#include<stdio.h>
int main(){
   unsigned long int fact=1,i,n;
    printf("enter any number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact =fact*i;
        printf("%d\n",fact);
    }
    printf("\n%d",i);
    return 0;
}