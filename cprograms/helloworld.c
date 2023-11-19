#include <stdio.h>
#include <stdlib.h>
int check(int *string, int *frames, int pos, int f_size)
{
    for (int i = 0; i < f_size; i++)
    {
        if (*(string + pos) == *(frames + i))
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int i, j, str_len, f_size, *string = NULL, *frames = NULL, faults = 0;
    printf("Enter string length:");
    scanf("%d", &str_len);
    printf("Enter no.of frames:");
    scanf("%d", &f_size);
    string = (int *)malloc(sizeof(int) * str_len);
    frames = (int *)malloc(sizeof(int) * f_size);
    printf("Enter reference string:");
    for (i = 0; i < str_len; i++)
    {
        scanf("%d", string + i);
    }
    for (i = 0; i < f_size; i++)
    {
        *(frames + i) = -1;
    }
    j = 0;
    for (i = 0; i < str_len; i++)
    {
        if (!check(string, frames, i, f_size))
        {
            faults++;
            *(frames + j) = *(string + i);
            j = (j + 1) % f_size;
        }
        for (int k = 0; k < f_size; k++)
        {
            printf("%d ", *(frames + k));
        }
        printf("\n");
    }
    printf("The no.of faults are %d\n", faults);
    free(string);
    free(frames);
}