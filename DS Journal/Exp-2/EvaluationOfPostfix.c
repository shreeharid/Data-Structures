#include<stdio.h>

int stack[20];
int X = -1;
char postfix[100];
int i=0,j,a,b;

int ascii(char ch)
{
    int i;
    i = ch;
    return((i-48));
}

void push(int k)
{
    X = X + 1;
    stack[X] = k;
}

int pop()
{
    int s;
    s = stack[X];
    X = X -1;
    return(s);
}

void evaluate()
{
    for(i=0;postfix[i]!='\0';i++)
    {
        if(isdigit(postfix[i]))
        {
            j = ascii(postfix[i]);
            push(j);
        }
        else
        {
            switch(postfix[i])
            {
            case '+' :
                a = pop();
                b = pop();
                push((b+a));
                break;
            case '-' :
                a = pop();
                b = pop();
                push((b-a));
                break;
            case '*' :
                a = pop();
                b = pop();
                push((b*a));
                break;
            case '/' :
                a = pop();
                b = pop();
                push((b/a));
                break;
            }
        }
    }
}

int main()
{
    printf("Enter the postfix expression : ");
    scanf("%s",postfix);

    evaluate();
    printf("%d is result\n",stack[X]);
}
