#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arry;
    int i;

    //making a memory to allocate for 10 integers
    arry = (int *)malloc(10 * sizeof(int));
    if (arry == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    
    for (i = 0; i < 10; i++) {
        arry[i] = 7 * (i + 1);
    }

   
    printf("Multiplication table of 7 (1 to 10):\n");
    for (i = 0; i < 10; i++) {
        printf("7 x %d = %d\n", i + 1, arry[i]);
    }

    // Reallocate memory for 15 integers
    arry = (int *)realloc(arry, 15 * sizeof(int));
    if (arry == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    
    for (i = 10; i < 15; i++) {
        arry[i] = 7 * (i + 1);
    }

    
    printf("\nExtended multiplication table of 7 (1 to 15):\n");
    for (i = 0; i < 15; i++) {
        printf("7 x %d = %d\n", i + 1, arry[i]);
    }

    
    free(arry);

    return 0;
}