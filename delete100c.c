#include <stdio.h>
void main() 
{
	int i;
	int j;
    int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = 10;

    printf("Original Array: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    
    int numToDelete;
    printf("\nEnter the number to delete: ");
    scanf("%d", &numToDelete);

    int found = 0; 
    for (i = 0; i < size; i++) {
        if (array[i] == numToDelete) {
            
            for ( j = i; j < size - 1; j++) {
                array[j] = array[j + 1];
            }
            found = 1; 
            size--;    
            i--;       
        }
    }

    if (found) {
        printf("Array after deletion: ");
        for ( i = 0; i < size; i++) {
            printf("%d ", array[i]);
            
        }
    } else {
        printf("Number not found in the array.");
    
    }
}
