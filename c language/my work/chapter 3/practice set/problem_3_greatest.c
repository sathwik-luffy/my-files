#include <stdio.h>
    int main(){
        //find the greatest number out of 4
        int a,b,c,d;
        printf("enter 4 numbers\n");
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if (a>b||a>c||a>d)
        {
           printf("the greatest number is %d",a);
        }
        else if (b>a||b>c||b>d)
        {
            printf("the greatest number is %d",b);
        }
        else if (c>a||c>b||c>d)
        {
            printf("the greatest number is %d",c);
        }
        else if (d>a||d>b||d>c)
        {
           printf("the greatest number is %d",d);
        }
           return 0;
}
