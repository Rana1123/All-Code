#include<stdio.h>
int main()
{
    char fn[10];
    char sn[10];
    char cfn[10]="Masud";
    char csn[10]="Rana";

    printf("Enter your 1st name\n");
    scanf("%s",&fn);
    printf("Enter your 2nd name\n");
    scanf("%s",&sn);
   // printf("Enter your 1st cheek name\n");
   // scanf("%s",&cfn);
   // printf("Enter your 2nd cheek name\n");
   // scanf("%s",&csn);
    if((strcmp(fn,cfn))==0 && (strcmp(sn,csn))==0)
    {
        printf("Same");
    }
    else if((strcmp(fn,cfn))!=0 &&(strcmp(sn,csn))==0)
    {
        printf("1st name is wrong\n");
    }
    else if((strcmp(fn,cfn))==0 &&(strcmp(sn,csn))!=0)
    {
        printf("2nd name is wrong\n");
    }
    else
    {
        printf("Wrong both");
    }
}
