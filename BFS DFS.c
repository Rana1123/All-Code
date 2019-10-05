#include<stdio.h>

void adjacencyList(char A[4],int M[4][4])
{
    int i,j,n=4;

}

int main()
{
    char A[4]={'A','B','C','D'};
    int n=4,i,j,M[4][4];

    printf("Enter the Path cost: \n");

    for(i=0;i<n;i++)
        printf("  %c",A[i]);

    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%c ",A[i]);

        for(j=0;j<n;j++)
        {
            scanf("%d",&M[i][j]);
        }

        printf("\n");
    }


    printf("Adjacency List: \n");

    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%c :- ",A[i]);

        for(j=0;j<n;j++)
        {
                if(M[i][j]>0)
                    printf("%c ",A[j]);
        }

        printf("\n");
    }


    printf("Adjacency Matrix: \n");
    for(i=0;i<n;i++)
        printf("  %c",A[i]);

    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%c ",A[i]);

        for(j=0;j<n;j++)
        {
            printf("%d  ",M[i][j]);
        }

        printf("\n");
    }

}

