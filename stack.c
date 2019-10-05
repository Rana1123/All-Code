#include<stdio.h>
int stack[10],top=-1;
void push(int item)
{
    if(top>=100-1)
    {
        printf("Stack is full");
    }
    else
    {
        top++;
        stack[top]=item;
    }
}
    void peek()
    {
        if(top<0)
        {
            printf("Stack is empty");
        }
        else
        {
            printf("%d\n",stack[top]);
        }
    }
    int pop()
    {
        if(top<0)
        {
            printf("Stack is full");
        }
        else
        {
            top--;
        }
    }
    int main()
    {
        push(25);
        push(35);
        push(45);
        push(55);
        peek();
        pop();
        peek();
        pop();
        peek();
    }

