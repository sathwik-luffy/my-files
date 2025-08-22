#include <stdio.h>
#include<string.h>
typedef struct emplyee
{
    int code;
    float salary;
    char name[50];
}emp ;

    int main(){
       // struct emplyee e1;
        emp e1;  //works same us upper one!
        e1.code = 1123;
        strcpy(e1.name,"sathwik");
        e1.salary = 100000;
        printf("%d,%s,%0.2f\n",e1.code,e1.name,e1.salary);
        


    
     return 0;
}