#include<stdio.h>
int main()
{
    int a,count=0;
    scanf("%d",&a);
    printf("%d ",a);
    while(a>0)
    {
        if(a==1)
        {
            break;
        }
        else
        {
            if(a%2!=0)
            {
                a=(3*a)+1;
                //count ++;

            }
            else
            {
                a=a/2;

               // count++;

            }

        }
         printf("%d ",a);



    }

}
