#include <stdlib.h>
#include <stdio.h>

#include "stackconfig.h"
#include "stack.h"

void push(Stack* stack, stackType data) {
    // Node* newNode = malloc(sizeof(Node));
    if(stack->top == MAX_SIZE - 1) {
        printf("Stack overflow while push\n");
        return;
    }
    ++stack->top;
    stack->arr[stack->top] = data;
}

stackType pop(Stack* stack) {
    if(stack->top == -1) {
        printf("Stack underflow while pop\n");
        return -1;
    }
    stackType data = stack->arr[stack->top];
    --stack->top;
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
    return stack->top == MAX_SIZE - 1;
}

void print(Stack* stack) {
    if (stack->top == -1) {
      printf("Stack underflow while print\n");
      return;
    }
    int i = 0;
    while(i <= stack->top) {
        printf(TYPE_FMT" ", stack->arr[i]);
        ++i;
    }
    printf("\n");
}
