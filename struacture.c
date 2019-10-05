
#include<stdio.h>
struct student
{
    char name[10];
    int Id;
};
int main()
{
    struct student s1,s2;
    printf("Enter Your ID\n");
    scanf("%d",&s1.Id);
    printf("Enter Your Name\n");
    scanf("%s",&s2.name);
      printf("Your Id Is = %d\n",s1.Id);
     printf("Your Name Is = %s\n",s2.name);

}
