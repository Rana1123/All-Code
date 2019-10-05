//Stack

#include <stdio.h>

int stack[20],head = -1;

void push(int data)
{
    head++;                     //This Push function inserting Element and this inserting Element must be int type.
    stack[head] = data;
}

int pop()
{
    int data = stack[head];
    head--;                     //This pop function removed element.Of course first remove last element.
    return data;

}

void display()
{
    printf("Your stack Data is:\n\n");
    for(int i=0;i<=head;i++)
        {
            printf("%d ",stack[i]);         //Shown all Element. Which element have our Stack.
        }

}

void main()
{
    push(55);   //55

    push(66);   //55    66

    push(77);   //55    66  77

    display();

    int data = pop();

     printf("\nyour removing data is: %d \n\n",data);  //remove 77

     display();

    data=pop();

    printf("\nyour removing data is: %d \n\n",data);    //remove 66

    display();
}
