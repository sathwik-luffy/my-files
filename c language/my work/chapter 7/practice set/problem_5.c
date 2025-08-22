#include <stdio.h>
    int main(){
        int arra[3][10];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                printf("the value of [%d][%d] ",i,j);
                scanf("%d",arra[i][j]);
            }
            
        }
        

     return 0;
}
