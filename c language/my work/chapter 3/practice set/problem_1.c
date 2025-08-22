#include <stdio.h>
    int main(){
        int marks1,marks2,marks3;
        scanf("%d %d %d",&marks1,&marks2,&marks3);
        if (marks1<34||marks2<34||marks3<34)
        {
            printf("you are failed");
        }
        else if (((marks1+marks2+marks3)/3)<50)
        {
            printf("you are fail");
        }
        else
        {
            printf("you are pass");
        }
        
        
        

     return 0;
}
