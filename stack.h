#include "stdbool.h"

typedef struct Stack {
    int* array;
    int size;
    int top;
} Stack;

/**
 * @brief Create a Stack object
 * 
 * @param size 
 * @return Stack 
 */
Stack* createStack(int size);

/**
 * @brief Tests if this Stack is empty
 * 
 * @param stack 
 * @return true 
 * @return false 
 */
bool isEmpty(Stack* stack);

/**
 * @brief Tests if this Stack is full
 * 
 * @param stack 
 * @return true 
 * @return false 
 */
bool isFull(Stack* stack);

/**
 * @brief Pushes an item onto the top of this Stack
 * 
 * @param stack 
 * @param x 
 * @return int 
 */
int push(Stack* stack, int x);

/**
 * @brief Removes the object at the top of this Stack and returns that object as the value of this function
 * 
 * @param stack 
 * @return int 
 */
int pop(Stack* stack);

/**
 * @brief Looks at the object at the top of this Stack without removing it from the Stack
 * 
 * @param stack 
 * @return int 
 */
int peek(Stack* stack);

/**
 * @brief Print the stack object
 * 
 * @param stack 
 */
void printStack(Stack* stack);