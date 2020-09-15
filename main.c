#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "stackconfig.h"
#include "stack.h"
#define MAX 100
int top=-1;
void testIntStack() {
    //stack = {NULL};
    char stack[MAX];
    print(stack[top]);
    push(stack[MAX], 3);
    print(stack[MAX]);
    push(stack[MAX], 4);
    print(stack[MAX]);
    push(stack[MAX], 5);
    print(stack[MAX]);
    pop(stack[MAX]);
    print(stack[MAX]);
    printf("%d\n", peek(stack[MAX]));
}
void testCharStack() {
    char stack[MAX];
    print(stack[MAX]);
    push(stack[MAX], 3 + 'a');
    print(stack[MAX]);
    push(stack[MAX], 4 + 'a');
    print(stack[MAX]);
    push(stack[MAX], 5 + 'a');
    print(stack[MAX]);
    pop(stack[MAX]);
    print(stack[MAX]);
    printf("%c\n", peek(stack[MAX]));
}
void problemTwoCheckPalindrome() {
    char *string = "madam";
    int length = strlen(string);
    int i;
    char leftStack[MAX];
    int halfLength = length/2;
    for(i=0; i<halfLength; ++i) {
        push(leftStack[MAX], string[i]);
    }
    char rightStack[MAX];
    for(i=0; i<halfLength; ++i) {
        push(rightStack[MAX], string[length-i-1]);
    }
    int palindrome = 1;
    while(!isEmpty(leftStack[MAX])) {
        char left =  pop(leftStack[MAX]);
        char right = pop(rightStack[MAX]);
        if(left != right) {
            palindrome = 0;
            break;
        }
    }
    if(palindrome) {
        printf("%s is a palindrome\n", string);
    } else {
        printf("%s is not a palindrome\n", string);
    }
}

void problemThreeSort() {
    int j,i;
    char counts[MAX];
    for(i=0; i<MAX; ++i) {
        counts[top] = -1;
    }
    char *string = "bcfda";
    int length = strlen(string);
    for(i=0; i<length; ++i) {
        int ch = string[i];
        push(counts[ch], ch);
    }
    char sorted[length+1];
    for(i=0, j=0; i<MAX; ++i) {
        while(!isEmpty(counts[i])) {
            sorted[j++] = pop(counts[i]);
        }
    }
    sorted[length] = 0;
    printf("Input: %s\n", string);
    printf("Output: %s\n", sorted);
}

int main() {
    testCharStack();

    // refer stackconfig.h to change to an int stack
     testIntStack();
    
    problemTwoCheckPalindrome();
    problemThreeSort();
    return 0;
}
