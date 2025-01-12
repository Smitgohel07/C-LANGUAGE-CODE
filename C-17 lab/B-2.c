#include <stdio.h>
void main() {
    int i, n, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];

    printf("Enter elements of the first array:\n");
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of the second array:\n");
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < n; i++) {
        temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);  
        *(arr2 + i) = temp;
    }

    printf("After swapping:\n");
    printf("First array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Second array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
}