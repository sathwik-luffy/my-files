#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int prime = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;
            break;
        }
    }
    if (prime)
    {
        printf("%d is not a prime number", n);
    }
    else
    {
        printf("%d is  a prime", n);
    }

    return 0;
}
