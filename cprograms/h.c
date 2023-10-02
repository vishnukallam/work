#include <stdio.h>
void radix_sort(int arr[], int n) {
    int i, bucket[10] = {0}, max_val = 0, digit_pos = 1;
    int output[n];
    for (i = 0; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    while (max_val / digit_pos > 0) {
        for (i = 0; i < 10; i++) {
            bucket[i] = 0;
        }
        for (i = 0; i < n; i++) {
            bucket[(arr[i] / digit_pos) % 10]++;
        }
        for (i = 1; i < 10; i++) {
            bucket[i] += bucket[i - 1];
        }
        for (i = n - 1; i >= 0; i--) {
            output[--bucket[(arr[i] / digit_pos) % 10]] = arr[i];
        }
        for (i = 0; i < n; i++) {
            arr[i] = output[i];
        }
        digit_pos *= 10;
    }
}
int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
   radix_sort(arr, n);
    printf("\nSorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}