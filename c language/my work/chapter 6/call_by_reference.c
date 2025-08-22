#include <stdio.h>
int sum(int*,int*);


int sum(int* a,int* b){
    *a=7;  //sum function cannot change x  using a bcouse copy of x is provider to sum in a
    return *a+*b;
}


    int main(){
        int x=3,y=2;
       printf( "%d\n",sum(&x,&y));
       printf("the value of x is :-%d ",x);

     return 0;
}
