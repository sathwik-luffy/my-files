#include <stdio.h>
#include <stdlib.h>
    int main(){

    int n;
    scanf("%d",&n);
    int *ptr;
    ptr = (int*) malloc(n * sizeof(int));
    ptr[3]=2;
    printf("%d\n",ptr[3]);
    


     return 0;
}