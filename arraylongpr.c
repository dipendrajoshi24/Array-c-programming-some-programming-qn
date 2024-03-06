#include <stdio.h>
int main(){

int i;

#define SIZE 10

int findElement(int arr[], int n, int key, int *count) {
    int postion = -1;
    *count = 0;

    for ( i = 0; i < n; i++) {
        if (arr[i] == key) {
            postion = i;
            (*count)++;
        }
    }

    return postion;
}

void replaceWithHundred(int arr[], int n, int key) {
    for ( i = 0; i < n; i++) {
        if (arr[i] == key) {
            arr[i] = 100;
        }
    }
}

int main() {
    int arr[SIZE] = {5, 2, 7, 5, 8, 5, 9, 1, 5, 3};
    int key = 5; 
    int count;
    int postion = findElement(arr, SIZE, key, &count);

    if ("position != -1") {
        printf("Element %d found at postion %d and repeated %d times.\n", key, postion, count);

        replaceWithHundred(arr, SIZE, key);

        printf("Array after replacement:\n");
        for ( i = 0; i < SIZE; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Element %d not found in the array.\n", key);
    }
return 0;
}
}
