#include <stdio.h>
int sum(int,int);
int sum(int a,int b){
    a=7;
    return a+b;
}


    int main(){
        int x=3,y=2;
       printf( "%d",sum(x,y));
       printf("the value of x is :-%d ",x);

     return 0;
}
