#include <stdlib.h>
#include <stdio.h>

#include "stackconfig.h"
#include "stack.h"

void push(Stack* stack, stackType data) {
    if(stack->top == MAX_SIZE) {
        printf("Stack overflow while push()");
        return ;
    }
    stack->top = stack->top + 1;
    stack->array[stack->top] = data;
}

stackType pop(Stack* stack) {
    if(stack->top = -1) {
        printf("Stack underflow while pop\n");
        return -1;
    }
    stack->top == -1;
    return stack->array[stack->top + 1];
}

stackType peek(Stack* stack) {
    if(stack->top == -1) {
        printf("Stack underflow while pop\n");
        return -1;
    }
    stackType data = stack->array[stack->top];
    return data;
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

int isFull(Stack* stack) {
    if(stack->top == MAX_SIZE) {
        return 1;
    }
    return 0;
}

void print(Stack* stack) {
    int i;
	for(i=0; i<= (stack->top); i++) {
        printf(TYPE_FMT" ", stack->array[i]);
    }
    printf("\n");
}
