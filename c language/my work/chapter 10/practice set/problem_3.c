#include <stdio.h>
    int main(){
char ch;
    FILE *a;
    //FILE *b;
    a = fopen("problem_3.txt","r");
    while(1){
        ch = fgetc(a);
        printf("%c",ch);
        if (ch==EOF)
        {
            break;
        }
        

    }
     return 0;
}