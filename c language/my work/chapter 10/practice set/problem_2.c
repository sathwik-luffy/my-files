#include <stdio.h>
    int main(){

    FILE *a;
    a =fopen("problem_2.txt","w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(a,"%d\n",5*(i+1));

    }
    

     return 0;
}