#include <stdio.h>
    int main(){
       // char c[]={'a','b','c','\0'};//\0 is a null character which difines the string is completed 
        
        char c[]="abc";//is same as the line 3
        for (int i = 0; i < 4; i++)
        {
            printf("the character is %c\n",c[i]);
            
        }
        
        

     return 0;
}
