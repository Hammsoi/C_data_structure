#include <stdio.h>
#define MAX 100
int front=-1;
int rear=-1;
int queue[MAX];
 
int isEmpty(void){
    if(front==rear)
        return 1;
    else return 0;
}
int isFull(void){
    int tmp=(rear+1)%MAX;
    if(tmp==front)
        return 1;
    else
        return 0;
}
void addq(int value){
    if(isFull())
        printf("Queue is Full.\n");
    else{
         rear = (rear+1)%MAX;
         queue[rear]=value;
        }

}
int deleteq(){
    if(isEmpty())
        printf("Queue is Empty.\n");
    else{
        front = (front+1)%MAX;
        return queue[front];
    }
}
 
int main(){
    
    addq(4);
    addq(7);
    addq(12);
    printf("%d\n",deleteq());
    printf("%d\n",deleteq());
    printf("%d\n",deleteq());
    deleteq();
    
    return 0;
}