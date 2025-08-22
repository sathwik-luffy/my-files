#include <stdio.h>
    int main(){
        int arr[10];
        int a;
        printf("enter a number \n");
        scanf("%d",&a);
        
        for (int i = 0; i < 10; i++)
        {
            arr [i]= a*(i+1);
            
        }
        for (int i = 0; i < 10; i++)
        {
            printf("%d X %d = %d\n",a,i+1,arr[i]);
        
            
            
    }        
        
        

     return 0;
}
