#include<stdio.h>
#include<math.h>
int main(){
    int dist,x1,x2,y1,y2;
    printf("enter x1,x2,y1,and y2 = ");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    dist = (sqrt((x2-x1)*2));
    printf("%d",dist);
