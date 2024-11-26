#include<stdio.h>
#define MAX_SIZE 100

int arr[MAX_SIZE];
int front=-1;
int rear=-1;

int isFull(){
  if(rear==MAX_SIZE){
    printf("Queue is full");
    return 1;
  }
  return 0;
}
int isEmpty(){
  if((rear==-1 && front==-1) || (front>rear)){
    return 1;
  }
  return 0;
}

void enqueue(int elem){
  if(isFull()){
    return;
  }
  if(front==-1 && rear==-1){
    front=0;rear=0;
  }else{
    rear++;
  }
  arr[rear]=elem;
}
int dequeue(){
  // printf("Hello world");
  if(isEmpty()){
    printf("Queue is Empty");
    return -1;
  }else{
    int val=arr[front];
    front++;
    return val;
  }
}

void display(){
  if(isEmpty()){
    printf("Queue is Empty");
    return;
  }
  for(int i=front;i<=rear;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}

// int main(){
//   enqueue(10);
//   enqueue(1);
//   enqueue(0);
//   enqueue(110);
//   enqueue(190);
//   // dequeue();
//   // dequeue();
//   // dequeue();
//   // dequeue();
//   dequeue();
//   dequeue();
//   display();

// }
