#include <stdlib.h>
#include <stdio.h>

#include "stackconfig.h"
#include "stack.h"

void push(Stack* stack, stackType data) {
    if(stack->top == MAX_SIZE) {
        printf("Stack overflow while push()");
        return;
    }
    stack->top+=1;
    stack->array[stack->top]=data;
}

stackType pop(Stack* stack) {
    if(stack->top == -1) {
        printf("Stack underflow while pop\n");
        return ;
    }
    stackType data=stack->array[stack->top];
    stack->top-=1;
    return data;
}

stackType peek(Stack* stack) {
    if(stack->top == -1) {
        printf("Stack is empty\n");
        return ;
    }
    stackType data = stack->array[stack->top];
    return data;
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

int isFull(Stack* stack) {
    return stack->top == MAX_SIZE;
}

void print(Stack* stack) {
    if(isEmpty(stack))
    	return;
    int i;
    for(i=0;i<=stack->top;i++){
    	printf(TYPE_FMT" ",stack->array[i]);
	}
	printf("\n");
}
