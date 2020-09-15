#include <stdlib.h>
#include <stdio.h>

#include "stackconfig.h"
#include "stack.h"

void push(Stack* stack, stackType data) {
   if(stack->top == MAX_SIZE) {
        printf("Stack overflow");
        return;
    }
    stack->top+=1;
    stack->a[stack->top]=data;
}

stackType pop(Stack* stack) {
    if(stack->top == -1) {
        printf("Stack underflow\n");
        return ;
    }
    stackType data=stack->a[stack->top];
    stack->top=stack->top-1;
    return data;
}

stackType peek(Stack* stack) {
   if(stack->top == -1) {
        printf("Stack is empty\n");
        return ;
    }
    stackType data = stack->a[stack->top];
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
    	printf(TYPE_FMT" ",stack->a[i]);
	}
	
	printf("\n");
}
