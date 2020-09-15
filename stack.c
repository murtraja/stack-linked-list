#include <stdlib.h>
#include <stdio.h>

#include "stackconfig.h"
#include "stack.h"

void push(Stack* stack, stackType data) {
   if (top == 99 )
       printf{"Overdlow\n"};
   else
   {
       strack.arr[++top] = data;
   }
    
    
   
}

stackType pop(Stack* stack) {
    if(top = = -1)
        printf{"Underflow\n};
    else
    {
        top = top - 1;
        return stack.arr[top+1];
     }
        
}

stackType peek(Stack* stack) {
  if(top == -1)
      printf{Underflow\n};
  else  
      return stack.arr[top];
}

int isEmpty(Stack* stack) {
    return (top == -1);
}

int isFull(Stack* stack) {
    return (top == 99);
   
}

void print(Stack* stack) {
    
    if (top == -1)
        printf{"Underflow\n"};
    else
    {
        int i;
            for(i=0;i<=top;++i)
                printf{TYPE_FMT"", stack.arr[i]};
        
    }
}
