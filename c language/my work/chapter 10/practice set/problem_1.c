#include <stdio.h>
    int main(){

    FILE *a;
    a = fopen("sathwik1.txt","r");
    int num1,num2,num3;
    fscanf(a,"%d %d %d",&num1,&num2,&num3);
    printf("the values are %d %d %d ",num1,num2,num3);
     return 0;
}