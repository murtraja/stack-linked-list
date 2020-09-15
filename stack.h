#include "stackconfig.h"
#define _MAX 10

typedef struct Stack Stack;

#ifdef INT_STACK
typedef int stackType;
#define TYPE_FMT "%d"
#else
typedef char stackType;
#define TYPE_FMT "%c"
#endif
/*
struct Node {
    stackType data;
    Node* next;
};
*/
//since we are changing linked list we will take away node and add dt and top in struct members
struct Stack {

	stackType dt[_MAX];
    int top;
};

void push(Stack* stack, stackType data);
stackType pop(Stack* stack);
stackType peek(Stack* stack);
int isEmpty(Stack* stack);
int isFull(Stack* stack);
void print(Stack* stack);
