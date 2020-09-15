#include <stdlib.h>
#include <stdio.h>

#include "stackconfig.h"
#include "stack.h"

//#define MAX 10
void push(Stack* stack, stackType data) {
   // Node* newNode = malloc(sizeof(Node));
    if(stack->top == _MAX) {
        printf("Stack overflow while push()");
        return;
    }
   // newNode->data = data;
    //newNode->next = stack->top;
    stack->top++;
    //incrementing pointer of top
    stack->dt[stack->top] = data;
    //pushing data at top position
}

stackType pop(Stack* stack) {
    if(stack->top == -1) {
        printf("Stack underflow while pop\n");
        return -1;
    }
    // Node* next = stack->top->next;
   // stackType data = stack->top->data;
   // free(stack->top);
   
   //to pop top element
    stack->top --;
    return stack->dt[stack->top+1]; //because we decremented pointer value by 1 already 
}

stackType peek(Stack* stack) {
    if(stack->top == -1) {
        printf("Stack underflow while pop\n");
        return -1;
    }
   // stackType dt = stacktop;
    return stack->dt[stack->top];
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

int isFull(Stack* stack) {
   // Node* newNode = malloc(sizeof(Node));
    if(stack->top == _MAX) {
        return 1;         
    }
    //free(newNode);
    return 0;
}

void print(Stack* stack) {
    int current = stack->top;
    while(current != -1) {
        printf(TYPE_FMT" ", stack->dt[current]);
        current--;
    }
    printf("\n");
}
