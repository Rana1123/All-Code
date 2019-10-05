//Minimum Number.
#include<stdio.h>

int main()
{
    int i, n, arr[10];

    printf("Enter total number of elements(1 to 10): ");
    scanf("%d", &n);
    printf("\n");


    for(i = 0; i < n; i++)
    {
       printf("Enter Number %d: ", i+1);
       scanf("%d", &arr[i]);
    }

    for(i = 1; i < n; ++i)
    {
       if(arr[0] > arr[i])
           arr[0] = arr[i];
    }
    printf("Minimum element is = %d", arr[0]);

    return 0;
}

