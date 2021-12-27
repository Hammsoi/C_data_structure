#include<stdio.h>
#define MAX_STACK_SIZE 100
#define TRUE   1
#define FALSE  0
int stack[MAX_STACK_SIZE];
int top=-1;
 
int isEmpty(){
    if(top<0)
        return TRUE;
    else
        return FALSE;
    }
int isFull(){
    if(top>=MAX_STACK_SIZE-1)
        return TRUE;
    else
        return FALSE;
}
 
void push(int value){
    if(isFull()==TRUE)
        printf("Full.");
    else
        stack[++top]=value; 
}
 
int pop(){
    if(isEmpty()==TRUE)
        printf("Empty.");
    else 
        return stack[top--];
}
 
int main(){
    
    push(3);
    push(5);
    push(12);
    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());
 
    return 0;
}
 