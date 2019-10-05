#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    printf("\t\tRABIN KARP ALGORITHM\n");

    char a[100],b[100];
    gets(a);
    gets(b);
    int la = strlen(a);
    int lb = strlen(b);
    int d = 100,p=0,t=0,h=1,i,j,mod = 11,c=0,s=0;

    for(i=0;i<lb-1;i++)
        h=(d*h)%mod;

    for(i=0;i<lb;i++)
       {
         p = (d*p + b[i])%mod;

         t = (d*t + a[i])%mod;


       }

    for(i=0;i<=la-lb;i++)
    {
        printf("p=%d\n",p);
        printf("t=%d\n",t);

if(p==t)
    s++;
            for(j=0;j<lb;j++)
            {
                if(a[i+j]!=b[j])
                    break;
            }
            if(j==lb){
                printf("pattern found at %d\n",i+1);
                c++;
        }

        if(i<la-lb)
        {
           t = ((t - a[i]*h) + a[i+lb])%mod;

            if(t < 0)
              t = (t + mod);
        }

    }
     for(i=0;i<=la;i++)
    {

if(p==t)
{
    s++;
}}

    printf("total found=%d\n",c);
printf("match=%d\n",s+1);
    printf("miss match=%d\n",s);
    return 0;
}
