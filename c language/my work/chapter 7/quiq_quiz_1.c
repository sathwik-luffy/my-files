#include <stdio.h>
int main()
{ // create a 2-d array  by taking input from the user.
  // write a display funtion to prin the content of this 2-darray on the screen

    int arr[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter the value of arr[%d][%d]\n ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" the value of arr[%d][%d]\n is %d \n ", i, j, arr[i][j]);
        }
    }

    return 0;
}
