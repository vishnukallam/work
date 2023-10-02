#include<stdio.h>
int main(){
    int remi,n,count=0,mul=1,tot=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        count++;
    }
    while(n!=0){
        remi=n%10;
        while(count!=0){
            mul=mul*remi;
            count--;
        }
    }
    tot=tot+mul;
    if(tot == n){
        printf("the given is armstrong number");
    }
    else  
        printf("the given is not a armstrong number");
        return 0;
}