#include <stdio.h>
    int main(){
        // n factorial 
        int n;
        printf("enter a number ");
        scanf("%d",&n);
        int product=1;
        for (int i = 1; i <=n; i++)
        {
           product*=i;
           
        }
        printf("the value of %d! is \n:-  %d\n",n,product);
        // int i= 1*2*3*4*5*6*7*8*9*10*11;
        // printf("%d",i);

     return 0;
}


