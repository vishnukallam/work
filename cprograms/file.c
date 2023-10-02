#include"stdio.h"
int main(){
    int n,i;
    float sum=2;
    printf("\nenter n value :");
    scanf("%d",&n);
    for(i=n;i<=n;i++){
        sum =sum+1/(float)i;
        printf("harmonic series of %d is %.2f",n,sum);
    }
    return 0;
}