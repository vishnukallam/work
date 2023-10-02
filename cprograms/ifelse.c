#include<stdio.h>
int main(){
    int p,q,r;
    printf("enter p,q,r: ");
    scanf("%d%d%d",&q,&p,&r);
    if(p>q&&p>r)
        printf("p is biggest");
    
        else if(q>r)
            printf("q is biggest");
        
            else    
                printf("r is biggest");
                return 0;
}