#include <stdio.h>
    int main(){
           FILE *ptr;

           
           
                ptr = fopen("sathwik.txt" , "r" );
                int num;
                fscanf(ptr,"%d",&num);
                printf("the value is %d\n",num);
                
                fscanf(ptr,"%d",&num);
                printf("the value is %d\n",num);

                fclose(ptr);
        

     return 0;
}