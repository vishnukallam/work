#include<stdio.h>
int main(){
    int a[5]={10,20,30,40,50};
    int *p;
    p=&a[4];  // p=a;
    printf("%d",*--p);//printf("%d",*(++p));*/
    return 0;
}