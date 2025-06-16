#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* createNode(int data);

int main(){
    //client code
    return 0;
}

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL){
        printf("Memory Allocation Failed..\n");
        return NULL;
    }
    newNode->data=data;
    newNode->next=NULL;

    return newNode;
}
