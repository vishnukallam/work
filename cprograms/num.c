#include <stdio.h>
long int main()
{
    int n, i, n1, tot = 1;
    printf("enter numbers : ");
    scanf("%d%d", &n, &n1);
    for (i + 0; i <= n; i++)
    {
        tot = tot * 10 + n * n1;
    }
    printf("tot %ld", tot);
    return 0;
}