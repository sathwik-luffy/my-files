#include <stdio.h>
#include <string.h>
    int main(){
                         char a[]="sathwik is my name";
/*funtion strlen */      printf("%d\n",strlen(a));
                        printf("%s\n",a);         // strlen is used to find the length of the string


                         char a[]="sathwik is my name";
 /*funtion strcpy*/      char target[30];
                         strcpy(target,a);        //now target contains same as the string in char a
                         printf("%s , %s\n",a,target);

                         char a[100]="sathwik";
/* funtion strcat*/      char b[100]=" is a programer";
                         strcat(a,b);            // combines both a and b 
                         printf("%s\n",a);

                        int a =  strcmp("jock","jock");// prints 0 as both are same
                        printf("%d\n",a);

                        int b = strcmp("string","funtion");//prints 1  according to ascii value
 /* funtion strcmp*/      printf("%d\n",b);                  // ascii value of s and f is 73 and 66

                        int c = strcmp("funtion","string");//prints -1  
                        printf("%d\n",c);
                        
     return 0;
}