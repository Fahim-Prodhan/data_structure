#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == MAX-1;
}

void push(int x) {
    if(isFull()) {
        printf("Error: Stack is Full!!!\n");
        return;
    }
    stack[++top] = x;
}

int pop() {
    if(isEmpty()) {
        printf("Error: Stack is Empty!!!\n");
        return;
    }
    return stack[top--];
}

void printStack() {
    printf("Stack:");
    for(int i = 0; i <= top; i++) {
        printf(" %i", stack[i]);
    }
    printf("\n");
}

int main()
{
    printStack();
    push(5);
    printStack();
    push(7);
    printStack();
    push(8);
    printStack();

    pop();
    printStack();
    pop();
    printStack();


    return 0;
}
