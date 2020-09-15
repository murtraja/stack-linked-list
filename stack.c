#include <stdlib.h>
#include <stdio.h>

#include "stackconfig.h"
#include "stack.h"

void push(Stack* stack, stackType data) {
    /*Node* newNode = malloc(sizeof(Node));
    if(newNode == NULL) {
        printf("Stack overflow while push()");
        return;
    }
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode; */
    
    if(stack->top == MAXS){
    	printf("Stack is Full!Overflow!\n");
	}
	else{
		stack->top++;
		stack->array[stack->top]=data;
	}
}

stackType pop(Stack* stack) {
    /*if(stack->top == NULL) {
        printf("Stack underflow while pop\n");
        return -1;
    }
    Node* next = stack->top->next;
    stackType data = stack->top->data;
    free(stack->top);
    stack->top = next;
    return data;*/
    
    if(stack->top == -1){
    	printf("Stack is empty!Underflow!\n");
	}
	else {
		stackType data= stack->array[stack->top];
		stack->top--;
		return data;
	}
	
}

stackType peek(Stack *stack) {
    /*if(stack->top == NULL) {
        printf("Stack underflow while pop\n");
        return -1;
    }
    stackType data = stack->top->data;
    return data;*/
    
    if(stack->top == -1){
    	printf("Stack is empty!\n");
	}
	else{
		return stack->array[stack->top];
	}
	
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

int isFull(Stack* stack) {
    if(stack->top == MAXS){
    	return 1;
	}
    else{
    	return 0;
	}
}

void print(Stack* stack) {
	int i=0;
    if (isEmpty(stack)){
    	return;
	}
	else{
		for(i=0; i<=stack->top;i++){
			printf(TYPE_FMT" ", stack->array[i]);
		}
	}
	printf("\n");
}
