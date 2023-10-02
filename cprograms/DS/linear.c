
#include <stdio.h>
int main()
{
    int n, i, x, first = 0, mid, last = n - 1,pos;
    printf("enter size of an array\n");
    scanf("%d", &n);
    printf("enter search element\n");
    scanf("%d", &x);
    int a[n];
    printf("enter %d elements:\n",n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    while(first <= last)
    {
        mid = first + last / 2;
        if(a[mid] ==x){
        pos=mid;
        printf("%d",pos);}
        else{
        if(a[mid]<x){
        last = mid - 1;
        printf("%d",a[mid]);
        }
        else
        first = mid + 1;
        }
    }
    if(pos ==)
    
    return 0;
}