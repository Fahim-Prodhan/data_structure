#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data; 
    struct node *next;
}Node;

Node *front = NULL;
Node *rear = NULL;

void enqueue(int data) {
    Node *temp = malloc(sizeof(Node));
    temp->data = data;

    if (front==NULL && rear == NULL)
    {
        temp->next = NULL;
        front = rear = temp;
    }else{
        temp->next = front;
        front = temp;
    }
    
}

void dequeue() {
    if (front == NULL) {
        printf("Queue is empty. dequeue Kora jabe na\n");
        return;
    }

    Node *temp = front;
    Node *prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    } 
    
    prev->next = NULL;
    rear = prev;

    free(temp);
}

void displayQueue() {
    Node *current = front;

    if (current == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main(){
    enqueue(17);
    enqueue(19);
    enqueue(23);
    displayQueue();
    dequeue();
    displayQueue();

    return 0;
}
