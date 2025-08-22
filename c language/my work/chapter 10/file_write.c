#include <stdio.h>
    int main(){

    FILE *ptr;
    ptr=fopen("sathwik.txt","a");
    int num;
    scanf("%d",&num);
    fprintf(ptr,"%d",num);
   
    
    
     return 0;
}