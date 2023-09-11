
#include<stdio.h>
#define MaxSize 10

int queue[MaxSize];

int front = -1;
int rear = -1;

int isFull() {
    return rear = MaxSize-1;
}

int isEmpty() {
    return front = rear = -1;
}

void enqueue(int value) {
    if(isFull()) {
        printf("Queue is Full");
        return;
    }
    rear++;
}

void dequeue() {
    if(isEmpty()) {
        printf("Can't dequeue! Queue is Empty!");
        return;
    }
    else{
        front++;
    }

}

void dispaly() {
    if(!isEmpty()) {
            printf("Queue: ");
        for(int i = front; i <= rear; i++) {
            printf("%d ",queue[i]);
        }
    }else{
        printf("Queue Empty");
    }

}

int main(){
    enqueue(7);
    display();
    return 0;
}
