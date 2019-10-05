#include<stdio.h>
int main()
{
    int fn;
    int sn;
    int cfn;
    int csn;

    printf("Enter your 1st name\n");
    scanf("%d",&fn);
    printf("Enter your 2nd name\n");
    scanf("%d",&sn);
    printf("Enter your 1st cheek name\n");
    scanf("%d",&cfn);
    printf("Enter your 2nd cheek name\n");
    scanf("%d",&csn);
    if(fn==cfn && sn==csn)
    {
        printf("same");
    }
   // else if(fn==cfn && sn!=csn)
   // {
   //     printf("\nYour 2nd name is wrong");
    //}
   // else if(fn!=cfn && sn==csn)
    //{
   //     printf("\nYour 1st name is wrong");
    //}
    else
    {
        if(fn==cfn && sn!=csn)
        {
              printf("\nYour 2nd name is wrong");
        }
        else if(fn!=cfn && sn==csn)
        {
             printf("\nYour 1st name is wrong");
        }
        else
        {
            printf("Wrong both");
        }

    }
}
