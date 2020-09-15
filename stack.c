#include <stdlib.h>
#include <stdio.h>

#include "stackconfig.h"
#include "stack.h"
#define MAX 100
void push(Stack* stack, stackType data) {
    //Node* newNode = malloc(sizeof(Node));
    if(stack->top == MAX) {
        printf("Stack overflow while push()");
        return;
    }
    //newNode->data = data;
    //newNode->next = stack->top;
    stack->top++;
    stack->array[stack->top] = data;
}

stackType pop(Stack* stack) {
    if(stack->top == -1) {
        printf("Stack underflow while pop\n");
        return -1;
    }
    //Node* next = stack->top->next;
    //stackType data = stack->top->data;
    //free(stack->top);
    stack->top--;
    return stack->array[stack->top+1];
}

stackType peek(Stack* stack) {
    if(stack->top == -1) {
        printf("Stack underflow while pop\n");
        return -1;
    }
    return stack->array[stack->top];
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

int isFull(Stack* stack) {
    //Node* newNode = malloc(sizeof(Node));
    if(stack->top == MAX) {
        return 1;
    }
    //free(newNode);
    return 0;
}

void print(Stack* stack) {
    int current = stack->top;
    while(current != -1) {
        printf(TYPE_FMT" ", current->array[current]);
        current--;
    }
    printf("\n");
}
