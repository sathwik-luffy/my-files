#include <stdio.h>
float avg(float,float,float);
    float avg(float a,float b,float c){
        printf("the avarage of %.2f,%.2f,%.2f is :-\n%.2f",a,b,c,(a+b+c)/3);
        return (a+b+c)/3;
    }
    int main(){

        avg(2,3,1);
        avg(23,43,23);
     return 0;
}
