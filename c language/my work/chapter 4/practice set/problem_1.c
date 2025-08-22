#include <stdio.h>
int main()
{
    // write a programe to print a 'n' nunmber table
    int n;
    printf("ener a number hear :- ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        int a = i * n;

        printf("%d X %d =%d\n", n, i, a);
    }

    return 0;
}
