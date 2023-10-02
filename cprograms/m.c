#include <stdio.h>
int linearSearchNonRecursive(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i; 
    }
    return -1;
}
//##################################################################
int linearSearchRecursive(int arr[], int key, int left, int right) {
    if (left > right)
        return -1;
    if (arr[left] == key)
        return left; 
    if (arr[right] == key)
        return right;
    return linearSearchRecursive(arr, key, left + 1, right - 1); 
}
int main() {
    int arr[100], key,size,i,recursiveIndex,nonRecursiveIndex;
    printf("enter soze of array :");
    scanf("%d",&size);
    printf("enter %d elements into array",size);
    for (i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("enter key value:");
    scanf("%d",&key);
    nonRecursiveIndex = linearSearchNonRecursive(arr, size, key);
    if (nonRecursiveIndex != -1)
        printf("Non-recursive: Key %d found at index %d\n", key, nonRecursiveIndex);
    else
        printf("Non-recursive: Key %d not found\n", key);
    //####################################################
    recursiveIndex = linearSearchRecursive(arr, key, 0, size - 1);
    if (recursiveIndex != -1)
        printf("Recursive: Key %d found at index %d\n", key, recursiveIndex);
    else
        printf("Recursive: Key %d not found\n", key);
    return 0;
}