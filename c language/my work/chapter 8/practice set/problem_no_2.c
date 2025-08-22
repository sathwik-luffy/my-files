#include <stdio.h>
    int main(){

    // char a[5];
    // //gets(a);
    // scanf("%s",a);
    // printf("%s\n",a);

    char b[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c",&b[i]);
        fflush(stdin);

    }
    b[5]='\0';
    printf("%s\n",b);
    
    
    
     return 0;
}