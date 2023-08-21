//with out pointer
#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *createNode(Node* temp, int data) {
    if(temp == NULL){
         Node *newNode = (Node*)malloc(sizeof(Node));
        newNode -> data = data;
        newNode -> next = NULL;

        return newNode;
    }else{
        printf("Error!! Link list is emplty");
        return;
    }


}

void insertAtEnd(Node* temp, int data) {
    Node *lastNode = (Node*)malloc(sizeof(Node));
    lastNode->data = data;
    lastNode->next = NULL;

    while(temp->next !=NULL) {
        temp = temp->next;
    }
    temp-> next= lastNode;
}

void display(Node* temp){
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}


int main() {

    Node *head = NULL;
    head = createNode(head,4);
    display(head);

    return 0;
}

// with pointer
#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
    int data;
    struct Node *next;
}Node;

void createNode(Node** temp, int data) {
        Node *newNode = (Node*)malloc(sizeof(Node));
        newNode -> data = data;
        newNode -> next = NULL;

        *temp = newNode;
}

void insertAtBegin(Node** head, int data) {
    Node *firstNode = (Node*)malloc(sizeof(Node));
    firstNode->data = data;
    firstNode->next = *head;
    *head = firstNode;
}

void insertAtEnd(Node* temp, int data) {
    Node *lastNode = (Node*)malloc(sizeof(Node));
    lastNode->data = data;
    lastNode->next = NULL;

    while(temp->next !=NULL) {
        temp = temp->next;
    }
    temp-> next= lastNode;
}

void insertAtMiddle(Node *temp, int data, int position) {
    Node* middle = (Node*)malloc(sizeof(Node));
    middle->data = data;
    int i=1;
    Node* previous = NULL;
    while(i<position) {
        previous = temp;
        temp = temp->next;
        i++;
    }
    previous->next = middle;
    middle->next = temp;
}



void display(Node* temp){
    while(temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}


int main() {


    Node *head = NULL;
    createNode(&head,4);
    insertAtEnd(head,7);
    insertAtBegin(&head,40);
    display(head);
    insertAtMiddle(head,33,2);

    return 0;
}


