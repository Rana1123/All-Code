#include <stdio.h>

int main() {
    int arr[10], n;
    int largest1, largest2, i;

    printf("enter number of elements you want in array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter your elements number %d = ",i);
        scanf("%d", &arr[i]);
    }

    largest1 = arr[0];

    for (i = 0; i < n; i++)
    {
            if (arr[i] > largest1)
             {
                largest1 = arr[i];
             }
    }

    largest2 = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest2 && arr[i] < largest1)
            largest2 = arr[i];
    }
    printf("Our 2nd largest number is = %d ",  largest2);
}
