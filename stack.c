#include <stdlib.h>
#include <stdio.h>

#include "stackconfig.h"
#include "stack.h"

void push(Stack* stack, stackType data) {
    if(stack->top==range-1)
    {
    	printf("Stack overflow while push()");
    	return;
    }
    	stack->top++;
		stack->arr[stack->top]=data;	
}

stackType pop(Stack* stack) {
    if(stack->top == -1) 
	{
        printf("Stack underflow while pop\n");
        return -1;
    }
    stackType data;
    data=stack->arr[stack->top];
    stack->top--;
    return data;
}

stackType peek(Stack* stack) {
    if(stack->top == -1) {
        printf("Stack underflow while pop\n");
        return -1;
    }
    stackType data = stack->arr[stack->top];
    return data;
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

int isFull(Stack* stack) {
    if(stack->top==range-1) {
        return 1;
    }
    return 0;
}

void print(Stack* stack) {
    int current=stack->top;
    while(current>=0) {
        printf(TYPE_FMT" ", stack->arr[current]);
        current--;
    }
    printf("\n");
}
