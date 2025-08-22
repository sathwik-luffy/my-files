#include <stdio.h>
int main()
{
    int marks[5];
    printf("enter the marks of 5 studens");
    scanf("%d", &marks[0]);
    scanf("%d", &marks[1]);
    scanf("%d", &marks[2]);
    scanf("%d", &marks[3]);
    scanf("%d", &marks[4]);
    printf("%d,%d,%d", marks[0], marks[1], marks[2]);
  
    return 0;
} 