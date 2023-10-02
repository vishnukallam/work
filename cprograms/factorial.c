#include<stdio.h>
int main(){
    int fact= 1,i,n;
    printf("enter n value  ");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        printf("%d",i);
        fact=fact*i;
        printf("the factorial of %d\n",fact);
    }
    printf("%d",i);
    return 0;
}
