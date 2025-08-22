#include <stdio.h>
int value(int);
int value(int a){
    return a*10;
}

    int main(){
        int a =3;
        printf("the value of a after 10 times is \n%d",value(a));

     return 0;
}
