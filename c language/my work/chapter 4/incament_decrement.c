#include <stdio.h>
    int main(){     
        int i = 5;
        i=i+5;
        printf("%d\n",i);
        //i++ prints i first and then icrements i ("post incrament operator")
        printf("%d\n",i++);
        printf("%d\n",i);

         //++i icrements i first and then prints i ("post incrament operator")
         printf("%d\n",++i);

         i +=2;//works same as i+2
         printf("%d\n",i);
         i +=10;//works same as i+10
         printf("%d\n",i);
         i--;//as i-1
         printf("%d\n",i);
         i-=2;//works as i-2
         printf("%d\n",i);
         i*=2;//multiply with 2
         printf("%d\n",i);
         i/=2;//dividing with 2
         printf("%d\n",i);
         i%=2;//reminder when divided by 2
         printf("%d",i);

     return 0;
}
