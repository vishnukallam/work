#include<stdio.h>
#include<conio.h>
int main(){
    int fir[10][10],sec[10][10],mul[10][10],i,j,m,n,p,q,k;
    printf("\nenter order of first matrix : ");
    scanf("%d%d",&m,&n);
    printf("\nenter order of second matrix");
    scanf("%d%d",&p,&q);
    if(n== p)
        printf("\nyou have entered wrong matrix\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
    else{
        printf("\nenter First matrix valuess: ");
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&fir[i][j]);
        printf("\nenter Second matrix Values : ");
        for(i=0;i<p;i++)
        for(j=0;j<q;j++)
            scanf("%d",&sec[i][j]);
        for(i=0;i<m;i++)
        for(j=0;j<q;j++){
            mul[i][j] = 0;
            for(k=0;k<n;k++)
                mul[i][j] = mul[i][j] + fir[i][k] * sec[k][j];
        }
        printf("\nthe maultiplation of a matrix :\n ");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++)
                printf("%d\t",mul[i][j]);
            printf("\n");
        }
    }
    return 0;
}