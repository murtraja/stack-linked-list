#include <stdlib.h>
#include <stdio.h>
#include "stackconfig.h"
#include "stack.h"

void push(Stack* stack, stackType input)
 {
/*newNode->data = data;
newNode->next = stack->top;
stack->top = newNode;*/
if (isFull(stack)) 
{
    printf("Stack Overflow!");
    return;
}
else
{
stack->top = stack->top+1;
stack->arr[stack->top] = input; 	
}
}
    
stackType pop(Stack * stack) 
{
if (isEmpty(stack))
{
printf("Stack Underflow!");
return -1;
}
else
{
stackType a = stack->arr[stack->top];
stack->top = stack->top - 1;
return a;	
}
}

void declaration(Stack* stack) 
{
    stack->top = -1;
}

stackType peek(Stack * stack)
{
if (isEmpty(stack)) 
{
    printf("Stack Underflow!\n");
    return -1;
}
else
{
stackType a = stack->arr[stack->top];
return a;	
}
}

int isEmpty(Stack * stack) 
{
  if (stack->top == -1)
  {
    return 1;
  }
  else
  {
  	return 0;
  }
}

int isFull(Stack * stack) 
{
 if (stack->top == MAX-1)
  {
    return 1;
  }
  else
  {
  	return 0;
  }
}

void print(Stack * stack)
 {
   int current = stack->top;
    while (current != -1)
{
    printf(TYPE_FMT" ", stack->arr[current]);
    current--;
}
printf("\n");
}
