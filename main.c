#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "stackconfig.h"
#include "stack.h"

void testIntStack() {
    Stack stack;
    stack.top=-1;
}

void testCharStack() {
    Stack stack;
    stack.top=-1;
}

void problemTwoCheckPalindrome() {
    char *string = "madam";
    int length = strlen(string);
	int i;
    Stack leftStack;
    leftStack.top=-1;
    int halfLength = length/2;
    for(i=0; i<halfLength; ++i) {
        push(&leftStack, string[i]);
    }

    Stack rightStack;
    rightStack.top=-1;
    for(i=0; i<halfLength; ++i) {
        push(&rightStack, string[length-i-1]);
    }
    int palindrome = 1;
    while(!isEmpty(&leftStack)) {
        char left = pop(&leftStack);
        char right = pop(&rightStack);
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
    int MAX = 255,i,j;
    Stack counts[MAX];
    for(i=0; i<MAX; ++i) {
        counts[i].top = -1;
    }
    char *string = "bcfda";
    int length = strlen(string);
    for(i=0; i<length; ++i) {
        int ch = string[i];
        push(&counts[ch], ch);
    }
    char sorted[length+1];
    for(i=0, j=0; i<MAX; ++i) {
        while(!isEmpty(&counts[i])) {
            sorted[j++] = pop(&counts[i]);
        }
    }
    sorted[length] = 0;
    printf("Input: %s\n", string);
    printf("Output: %s\n", sorted);
}

int main() {
    testCharStack();

    // refer stackconfig.h to change to an int stack
    // testIntStack();
    
    problemTwoCheckPalindrome();
    problemThreeSort();
    return 0;
}
