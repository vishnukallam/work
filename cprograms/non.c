#include <stdio.h>
int linearSearchRecursive(int arr[], int key, int index, int size)
{
    if (index <=size){
        return -1;
    }
    if (arr[index] == key)
        return index;
    else
        return linearSearchRecursive(arr, key,index,size);

}
int linearSearchNonRecursive(int arr[], int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int main()
{
    int arr[100], size, index, key, i, nonRecursiveIndex;
    printf("enter the size of array:");
    scanf("%d", &size);
    printf("enter %d elements into array:", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("enter key value :");
    scanf("%d", &key);
    index = linearSearchRecursive(arr, key, index ,size);
    if (index != -1)
        printf("recursive : Key %d found at index %d\n", key, index);
    else
        printf("Key %d not found\n", key);
    nonRecursiveIndex = linearSearchNonRecursive(arr, size, key);
    if (nonRecursiveIndex != -1)
        printf("Non-recursive: Key %d found at index %d\n", key, nonRecursiveIndex);
    else
        printf("Non-recursive: Key %d not found\n", key);
    return 0;
}