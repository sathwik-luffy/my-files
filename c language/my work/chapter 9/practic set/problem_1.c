#include <stdio.h>
struct vector
{

    int i;
    int j;
};

    int main(){
        struct vector v = { 1, 2};
        printf("the vector form of (%d,%d) is \n %di + %dj ",v.i,v.j,v.i,v.j);
        

    
     return 0;
}