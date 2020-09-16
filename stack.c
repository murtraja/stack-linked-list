#include <stdlib.h>
#include <stdio.h>

#include "stackconfig.h"
#include "stack.h"

void push(Stack* stack, stackType data)
 {
    if(stack->top==MAX_SIZE)
    {
        printf("Stack overflow while push()");
        return;
    }
    stack->array[++stack->top]= data;
}

stackType pop(Stack* stack)
 {
    if(stack->top == -1) 
   {
        printf("Stack underflow while pop\n");
        return -1;
    }
    stack->top--;
    return stack->array[stack->top+1];
}

stackType peek(Stack* stack)
    {
    if(stack->top == -1) 
    {
        printf("Stack underflow while pop\n");
        return -1;
    }
    return stack->array[stack->top];
}

int isEmpty(Stack* stack) 
{
    return stack->top == -1;
}

int isFull(Stack* stack) 
    {
    if(stack->top==MAX_SIZE) 
    {
        return 1;
    }
      return 0;
}

void print(Stack* stack)
    {
     if(isEmpty(stack));
     return;
     int i;
     for(i=0;i<=stack->top;i++) 
    {
        printf(TYPE_FMT" ", stack->array[i]);
        current = current->next;
    }
    printf("\n");
}
