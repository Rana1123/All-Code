
//Queue

#include<stdio.h>

int queue[10], head = -1, tail = 0;     //highest 10 enter this queue because declare the queue value is 10.

void enQueue(int value)
{
    if(head == 10-1)
    {
        printf("\nYour Queue is full.");           //cheek your queue it's full or not.
    }
    else
    {
        head++;

        queue[head] = value;                       //Inserting element in Queue.And that is int type.
    }
}
void deQueue()
{
    if(head == -1)
    {
        printf("\nYour Queue is Empty.");            //cheek your queue it's empty or not.
    }
    else
    {
        printf("\nRemoved Element is : %d", queue[tail]);      //Removed the element in Queue.And Must be first removed in first Element.

        tail++;
    }
}
void display()
{
    if(head == -1)
    {
        printf("\nYour Queue is Empty.");                      //cheek your queue it's empty or not.
    }
    else
        {
            int i;
            printf("\nYour elements are:\n");                  ////Shown all Element. Which element have our Queue.
            for(i=tail; i<=head; i++)
            printf("%d\t",queue[i]);
        }
}

void main()
{

    enQueue(15);    //15

    enQueue(25);    //15    25

    enQueue(35);    //15    25  35

    display();

    enQueue(45);    //15    25  35  45

    display();

    deQueue();

    display();      //25    35  45

    deQueue();

    display();      //35    45
}
