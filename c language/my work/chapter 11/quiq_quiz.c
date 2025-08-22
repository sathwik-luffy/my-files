#include <stdio.h>
#include <stdlib.h>
    float main(){

    float n=5;
    
    float *ptr;
    ptr = (float*) malloc(n * sizeof(float));
    ptr[0]=1;
     ptr[1]=2;
      ptr[2]=21;
       ptr[3]=13;
        ptr[4]=61;
       
        
    
    printf("%.2f\n",ptr[0]);
    printf("%.2f\n",ptr[1]);
    printf("%.2f\n",ptr[2]);
    printf("%.2f\n",ptr[3]);
    printf("%.2f\n",ptr[4]);

    


     return 0;
}