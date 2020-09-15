#include <stdlib.h>
#include <stdio.h>

#include "stackconfig.h"
#include "stack.h"


void push(Stack* stack, stackType data) {
    if (stack.top == max_size - 1 )
        printf("Overflow\n");
    else
    {
        stack.arr[++stack.top] = data;
    }
        
}

stackType pop(Stack* stack) {
    if(stack.top == -1)
        printf("Underflow\n");
    else
    {
        stack.top = stack.top - 1;
        return stack.arr[stack.top+1];
    }
}

stackType peek(Stack* stack) {
    if (stack.top == -1)
         printf("Underflow\n");
    else
        return stack.arr[stack.top];
        
}

int isEmpty(Stack* stack) {
    return (stack.top == -1);
}

int isFull(Stack* stack) {
    return (stack.top == max_size-1);
}

void print(Stack* stack) {
     if(stack.top == -1)
        printf("Underflow\n");
    else
    {
       int i;
        for(i=0;i<=stack.top;++i)
             printf(TYPE_FMT" ", stack.arr[i]);
    }
}
