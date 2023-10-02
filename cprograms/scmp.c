#include<stdio.h>
#include<math.h>
int main(){
    int x1,x2,y1,y2;
    float distance;
    printf("\nEnter integer values  : ");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    distance = ((pow(x1-x2,2))+(pow(y2-y1,2)));
    printf("\n %f ",distance);
return 0;
}
