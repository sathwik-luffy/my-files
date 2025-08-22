#include <stdio.h>

int main() {
    int table[15]; // Fixed-size array (7 x 1 to 7 x 15)
    int i;

    for (i = 0; i < 15; i++) {
        table[i] = 7 * (i + 1);
        printf("7 x %d = %d\n", i + 1, table[i]);
    }

    return 0;
}