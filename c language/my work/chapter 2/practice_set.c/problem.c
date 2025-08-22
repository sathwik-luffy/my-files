//check whether a number is divisible by 97 or not
#include <stdio.h>
    int main(){
        int a;
        printf("enter the number to check :- ");
        scanf("%d",&a);
        int b = a/97;
        if (b==1)
        {
          printf("%d is a perfevt divisible of 97",a);
        }
        if (b<1)
        {
          printf("%d is not a perfect divisible of 97 ",a);
        }
        if(b>1){
         printf("%d is not a perfect divisible of 97 ",a);} 
      
        
     
       


     return 0;
}
