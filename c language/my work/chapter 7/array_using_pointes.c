#include <stdio.h>
      int main()
      {
    
          int marks[] = {2, 3, 4, 5, 6};
          // int *ptr= &marks[0];//both are same!!
          int *ptr = marks; // both are same!!
      for (int i = 0; i < 5; i++)
      {
          printf("the value of %d\n", marks[i]);
                    printf("the value of %d is %d\n",i, *ptr);
                    ptr++;

      }
      return 0;
      }
