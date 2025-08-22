#include <stdio.h>
    int main(){

    FILE *ptr;
    ptr = fopen("sathwik.txt","r");
    char c= fgetc(ptr);
    printf("%c",c);
     return 0;
}