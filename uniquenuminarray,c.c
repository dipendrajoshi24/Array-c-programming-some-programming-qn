#include <stdio.h>
int i;

void printUnique(int arr[], int n) {
    for (i = 0; i < n; i++) {
        int j;
    
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j])
                break;
        }
        
        if (i == j)
            printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 1, 2, 5, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unique elements in the array are: ");
    printUnique(arr, n);

    return 0;
}

