#include <stdio.h>
#include<string.h>

#define MAX 20

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
        return -1;
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

int isBalanced(char exp[]){
    for(int i = 0; i < strlen(exp); i++){
        char ch = exp[i];
        if(ch=='('){
            push(ch);
        }else if(ch==')'){
            if(isEmpty()){
                return 0;
            } 
            pop();
        }
    }
    
    // if(isEmpty()) {
    //     return 1;
    // }else{
    //     return 0;
    // }
    
    return isEmpty();
}

int main()
{
    char exp[MAX];
    printf("Enter a expression: ");
    scanf("%s", exp);
    
    if(isBalanced(exp)) {
        printf("All is well");
    }else{
        printf("Braket is not balanced");
    }

    return 0;
}
