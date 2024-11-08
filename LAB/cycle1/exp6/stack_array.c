//program of stack using array
#include <stdio.h>

int stack[100];
int top = -1;
int size = 5;

void push(int x)
{
    if (top >= size - 1) 
    {
        printf("stack overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

int pop()
{
    if (top < 0)
    {
        printf("stack underflow\n");
        return -1; // Return a sentinel value (e.g., -1) to indicate an error
    } 
    else
    {
        int x = stack[top];
        top--;
        return x;
    }
}

int peek()
{
    if (top < 0)
    {
        printf("stack underflow\n");
        return -1; // Return a sentinel value (e.g., -1) to indicate an error
    } 
    else
    {
        return stack[top];
    }
}

void display() 
{
    if (top < 0) 
    {
        printf("stack is empty\n");
    } 
    else 
    {
        printf("stack elements are:\n");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() 
{
    int choice, value;
    while (1) {
        printf("\nmenu:\n");
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. peek\n");
        printf("4. display\n");
        printf("5. exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                value = pop();
                if (value != -1)
                {
                    printf("popped value is %d\n", value);
                }
                break;
            case 3:
                value = peek();
                if (value != -1) 
                {
                    printf("top element is %d\n", value);
                }
                break;
            case 4:
                display();
                break;
            case 5:
                printf("exiting...\n");
                return 0;
            default:
                printf("invalid choice, please try again.\n");
        }
    }
    return 0;
}

OUTPUT

menu:
1. push
2. pop
3. peek
4. display
5. exit
enter your choice: 1
enter value to push: 6

menu:
1. push
2. pop
3. peek
4. display
5. exit
enter your choice: 4
stack elements are:
4 6
