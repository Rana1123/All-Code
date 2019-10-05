//Average
#include<stdio.h>
int main()
{
    int i,j,sum=0,num;
    double avg;
    printf("Enter number\n");
    scanf("%d",&num);
    int array[num];
    printf("Enter %d numbers\n",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }
    avg=sum/num;
    printf("Average of %d numbers is %.2lf\n",num,avg);
}
