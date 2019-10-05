
#include <stdio.h>

int main()
{
	int a[100],n,i,j;

	double avg,sum=0;

	printf("Array size: ");

        scanf("%d",&n);

        printf("Elements: ");

      for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //Ascending Sort.


    for (int i = 0; i < n; i++)
    {


		for (int j = 0; j < n; j++)
		{
			if (a[j] > a[i])
			{
				int tmp = a[i];

				a[i] = a[j];

				a[j] = tmp;
			}
		}
    }

	printf("\n\nAscending : ");

	for ( i = 0; i < n; i++)
	{
		printf(" %d ", a[i]);
	}

    //Descending Sort.


	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			if (a[j] < a[i])
			{
				int tmp = a[i];

				a[i] = a[j];

				a[j] = tmp;
			}
		}
	}
	printf("\n\nDescending : ");

	for ( i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }

    //Average Number.


     for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;

    printf("\n\nAverage of %d numbers is %.2lf\n",n,avg);

        //Maximum Number.


        for(i = 1; i < n; ++i)
    {
       if(a[0] < a[i])

           a[0] = a[i];
    }
    printf("\n\nMaximum element is= %d",a[0]);

    //Minimum Number.


      for(i = 1; i < n; ++i)
    {
       if(a[0] > a[i])

           a[0] = a[i];
    }
    printf("\n\nMinimum element is= %d",a[0]);

}


