#include<stdio.h>
# define MAX 5

int stack[5];   //Declare array stack
int X = -1;
int i,ch;

int isfull()    //isfull function
{
    if(X == MAX-1)
    {
        printf("Stack is FULL\n");
        return(1);
    }
    else
    {
        printf("Stack is NOT FULL\n");
        return(0);
    }
}
int isempty()
{
    if(X == -1)
    {
        printf("Stack is EMPTY\n");
        return(1);

    }
    else
    {
        printf("Stack is NOT EMPTY\n");
        return(0);
    }
}

void push()
{
    int var;
    if(!isfull())
    {
        printf("Enter the element to be pushed : ");
        scanf("%d",&var);
        X = X + 1;
        stack[X] = var;
        printf("%d is pushed\n",stack[X]);
    }
}

void pop()
{
    if(!isempty())
    {
        printf("%d is popped\n",stack[X]);
        X = X - 1;
    }
}
void display()
{
    for(i=X;i>-1;--i)
    {
        printf("%d\n",stack[i]);
    }
}

int main()
{
    start :
    printf("Enter your choice :\n1.PUSH\t2.POP\t3.isEmpty\t4.isFull\t5.DISPLAY\nchoice : ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1 :
            push();
            break;
        case 2 :
            pop();
            break;
        case 3 :
            isempty();
            break;
        case 4 :
            isfull();
            break;
        case 5 :
            display();
            break;
        default :
            printf("Enter the correct choice\n");
            break;
    }
    goto start;
}
