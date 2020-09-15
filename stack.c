#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#include "stackconfig.h"
#include "stack.h"
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
char pop(char stack[MAX]) {
    /*if(stack->top == NULL) {
        printf("Stack underflow while pop\n");
        return -1;
    }
    Node* next = stack->top->next;
    stackType data = stack->top->data;
    free(stack->top);
    stack->top = next;
    return data;*/
    if(top<=-1){
     printf("underflow");
   }
   else{
     //printf("popped element: %d",stack[top]);
     top = top-1;
     return stack[top];
     //printf("stack is popped\n");
   }
}
char peek(char stack[MAX]) {
    /*if(stack->top == NULL) {
        printf("Stack underflow while pop\n");
        return -1;
    }
    stackType data = stack->top->data;
    return data;*/
    if(top<=-1){
     return -1;
   }
    else{
      return stack[top];
   }
}
int isEmpty(char stack[MAX]) {
	if(top<1){
    return 1;
}
else{
return 0;
}
}
int isFull(char stack[MAX]) {
if(top==MAX){
return 1;
}
else{
return 0;
}
}
void print(char stack[MAX]) {
    /*Node* current = stack->top;
    while(current != NULL) {
        printf(TYPE_FMT" ", current->data);
        current = current->next;
    }
    printf("\n");*/
    for(int i=top; i>=0; i--){
     printf("%d\n",stack[i]);
}
}
