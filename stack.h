#include<stdio.h>
#include "stackconfig.h"
//typedef struct Stack Stack;
//typedef struct Node Node;
#define MAX 100
char stack[MAX]
/*#ifdef INT_STACK
typedef int stackType;
#define TYPE_FMT "%d"
#else
typedef char stackType;
#define TYPE_FMT "%c"
#endif
/*struct Node {
    stackType data;
    Node* next;
};

struct Stack {
    Node* top;
};*/
;
void push(char stack[MAX], char data);
char peek(char stack[MAX]);
int isEmpty(char stack[MAX]);
char pop(char stack[MAX]);
int isFull(char stack[MAX]);
void print(char stack[MAX]);
