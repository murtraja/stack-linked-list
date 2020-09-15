#include "stackconfig.h"

typedef struct Stack Stack;
#define MAX_SIZE 50

#ifdef INT_STACK
typedef int stackType;
#define TYPE_FMT "%d"
#else
typedef char stackType;
#define TYPE_FMT "%c"
#endif

struct Stack {
    int top;
    stackType array[MAX_SIZE];
};

void push(Stack* stack, stackType data);
stackType pop(Stack* stack);
stackType peek(Stack* stack);
int isEmpty(Stack* stack);
int isFull(Stack* stack);
void print(Stack* stack);
