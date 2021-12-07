#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

Stack* createStack(int size) {
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    stack->array = malloc(sizeof(int) * size);
    stack->size = size;
    stack->top = -1;
    return stack;
}

bool isEmpty(Stack* stack) {
    if (stack->top == -1) return true;
    return false;
}

bool isFull(Stack* stack) {
    if (stack->top == stack->size - 1) return true;
    return false;
}

int push(Stack* stack, int x) {
    if (isFull(stack)) {
        printf("Couldn't push into because the stack is full.\n");
        return -1;
    } else {
        stack->top = stack->top + 1;
        stack->array[stack->top] = x;
        return stack->array[stack->top];
    }
}

int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Couldn't pop because Stack is empty.\n");
        return -1;
    } else {
        int e = peek(stack);
        stack->top = stack->top-1;
        return e;
    }
}

int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Couldn't peek because Stack is empty.\n");
        return -1;
    } else {
        return stack->array[stack->top];
    }
}

void printStack(Stack* stack) {
    for (int i = stack->top; i >= 0; i--) {
        printf("%d\n", stack->array[i]);
    }
}