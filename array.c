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
