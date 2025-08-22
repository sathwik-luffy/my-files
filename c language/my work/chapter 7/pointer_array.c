#include <stdio.h>
    int main(){
               int marks[3];
       for (int i = 0; i < 3; i++)
       {
        printf("the marks of the student is \n");
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("the marks of %d is %d\n",i,marks[i]);
        printf("the adrres of %d is %u\n",i,&marks[i]);
        
        
       }
       
       

     return 0;
}
