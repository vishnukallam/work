#include<stdio.h>
    int main(){
int a,b;
scanf("%d%d",&a,&b);
void add(int,int);
add(a,b);
}
void add( int x,int y){
int c;
c=x+y;
printf("sum is printed in add()");
printf("%d",c);
return 0;
}