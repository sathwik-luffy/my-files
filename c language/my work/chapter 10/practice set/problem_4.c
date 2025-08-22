#include <stdio.h>
int main()
{
    int sallary1, sallary2;
        char name1[30], name2[30];
        FILE *ptr;
    ptr = fopen("problem_3 text", "aw");
            printf("enter the name of the employee\n");
            scanf("%s", name1);
                    printf("enter the sallary of the employee\n");
                     scanf("%d", &sallary1);

        printf("enter the name of the second employee\n");
        scanf("%s", name2);
            printf("enter the sallary of the second employee\n");
            scanf("%d", &sallary2);
    fprintf(ptr, "name of the  first employee is \n%s\n", name1);
    fprintf(ptr, "salary:- %d/n", sallary1);
            fprintf(ptr, "name of the  second employee is \n%s\n", name2);
            fprintf(ptr, "salary:- %d", sallary2);

    return 0;
}