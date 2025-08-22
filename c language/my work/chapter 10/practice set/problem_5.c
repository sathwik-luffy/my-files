#include <stdio.h>
    int main(){

    FILE *ptr;
    ptr = fopen("int.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    printf("%d",num);
    fclose(ptr);
    FILE *a;
    a = fopen("int.txt","w");

    
    fprintf(a,"%d",num*2);
    fclose(a);
       return 0;
}