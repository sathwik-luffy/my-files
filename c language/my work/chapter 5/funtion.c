#include <stdio.h>
        //FUNCTION PROTOTYPE
        int sum(int,int);

        //FUNCTION DEFINATION
        int sum(int x,int y){//x,y are called parameters
            
            printf("THE SUM IS %d\n",x+y);
            return x+y;
        }
    int main(){
        int a1 = 11;
        int b1 = 21;
        // int c1 = a1+b1;
        // printf("the sum is %d\n",c1);
        sum(a1,b1);// a1,b1 are called argument 

         int a2 = 12;
        int b2 = 22;
        // int c2 = a2+b2;
        // printf("the sum is %d\n",c2);
        sum(a2,b2);
         int a3 = 13;
        int b3 = 23;
        // int c3 = a3+b3;
        // printf("the sum is %d\n",c3);
        sum(a3,b3);//function call

        // simplest form
        sum(54,4); //function call

        int a4 =21;
        int b4 = 31;


     return 0;
}
