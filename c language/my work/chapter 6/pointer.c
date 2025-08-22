#include <stdio.h>
    int main(){

        int i=21;
        int* j=&i;//j is a ponter which stores the adress of i
        int k= 20;
        printf("adress of i is %u \n",&i);
                printf("adress of i is %u ",&k);
                printf("the value of the adress of j is %d",*(&i));

     return 0;
}
