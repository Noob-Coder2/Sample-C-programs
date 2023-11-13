#include <stdio.h>

int binarySearch(int arr[], int size, int target, int *iterations) {
    int left = 0;
    int right = size - 1;

    *iterations = 0; // Initialize the iteration count

    while (left <= right) {
        int mid = left + (right - left) / 2;
        (*iterations)++; // Increment the iteration count

        if (arr[mid] == target)
            return mid; // Element found, return its index
        else if (arr[mid] < target)
            left = mid + 1; // Adjust the left boundary
        else
            right = mid - 1; // Adjust the right boundary
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} , target;
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Enter the Element :");
    scanf("%d",&target);
    int iterations;

    int result = binarySearch(arr, size, target, &iterations);

    if (result != -1)
        printf("Element %d found at index %d\n", target, result);
    else
        printf("Element %d not found in the array\n", target);

    printf("Binary search took %d iterations.\n", iterations);

    return 0;
}
