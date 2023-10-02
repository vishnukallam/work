// #include<stdio.h>
// enum months{jan=1,feb,mar,april};
// int main(){
//     enum months m;
//     int i;
//     printf("The months are");
//     for(i=jan;i<=april;i++){
//         printf(" %d\t",i);
//     }
//     return 0;
// }
#include <stdio.h>
#include <conio.h>
void main()
{
    int st[10], bt[10], wt[10], tat[10], n, tq;
    int i, count = 0, swt = 0, stat = 0, temp, sq = 0;
    float awt = 0.0, atat = 0.0;
    //clrscr();
    printf("Enter number of processes:");
    scanf("%d", &n);
    printf("Enter burst time for sequences:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
        st[i] = bt[i];
    }
    printf("Enter time quantum:");
    scanf("%d", &tq);
    while (1)
    {
        for (i = 0, count = 0; i < n; i++)
        {
            temp = tq;
            if (st[i] == 0)
            {
                count++;
                continue;
            }
            if (st[i] > tq)
                st[i] = st[i] - tq;
            else if (st[i] >= 0)
            {
                temp = st[i];
                st[i] = 0;
            }
            sq = sq + temp;
            tat[i] = sq;
        }
        if (n == count)
            break;
    }
    for (i = 0; i < n; i++)
    {
        wt[i] = tat[i] - bt[i];
        swt = swt + wt[i];
        stat = stat + tat[i];
    }
    awt = (float)swt / n;
    atat = (float)stat / n;
    printf("Process_no \t Burst time \t Wait time \t Turn around time\n");
    for (i = 0; i < n; i++)
        printf("%d \t%d \t%d \t%d\n", i + 1, bt[i], wt[i], tat[i]);
    printf("Avg wait time is %f \n Avg turn around time is %f", awt, atat);
    getch();
}
