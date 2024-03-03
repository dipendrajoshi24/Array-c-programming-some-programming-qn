#include <stdio.h>

 void main() {
 	
	int i;
    int array[10];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Original array: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\nArray after replacing numbers with 100: ");
    for ( i = 0; i < size; i++) {
        if (array[i] = 100) {
            array[i] = 100;
        }
        printf("%d ", array[i]);
    }
}
