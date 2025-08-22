#include <stdio.h>
int cout(int a[],int b){
    int no_of_positive_numbers = 0;
    for (int i = 0; i < b; i++)
    {
        if (a[i]>0)
        {
            no_of_positive_numbers++;
        }
        return no_of_positive_numbers;
    }
    
}
    int main(){
 int a[]={1,-2,3,-4,5,-6,7,-8,9,10};
        int* ptr= a;
        printf("the number of positive numbers is %d",cout(a,10));
     return 0;
}
