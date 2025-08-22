#include <stdio.h>
    int main(){
        int marks;
        printf("please enter your marks below:-\n");
        scanf("%d",&marks);
        if (marks<=100&&marks>=90)
        {
           printf("congartulastions you have secured A grade in your exam");
        }
        //else if (marks>100)
        //{
        //    printf("you have entered wrong marks")
        ///}
        
        else if (marks<90&&marks>=80)
         {
            printf("congartulastions you have secured B grade in your exam");
         }
         
         else if (marks<80&&marks>=70)
         {
            printf("congartulastions you have secured c grade in your exam");
         }
          
         else if (marks<70&&marks>=60)
         {
            printf("congartulastions you have secured D grade in your exam");
         }
          
         else if (marks<60&&marks>=50)
         {
            printf("congartulastions you have secured E grade in your exam");
         }
            else if (marks<50)
            {
                printf("you have failed in your exam");
            }
            else
            {
                printf("you have entered wrong marks");
            }
            
            
     return 0;
}
