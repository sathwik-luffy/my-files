#include <stdio.h>
    int main(){

    char a;
    FILE *ptr;
    ptr = fopen("sathwik.txt","r");
    while (1)
    {
        a = fgetc(ptr);
        printf("%c",a);
        if (a==EOF)
        {
            break;
        }
        
    }
    
     return 0;
}