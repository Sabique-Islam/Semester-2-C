#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertFront(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void display(struct Node* head) {
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void deleteFront(struct Node** head) {
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void freeList(struct Node** head) {
    struct Node* temp;
    while (*head != NULL) {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

int main() {
    struct Node* head = NULL;
    int n, data;
    
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insertFront(&head, data);
    }
    
    display(head);
    
    printf("Deleting the first node...\n");
    deleteFront(&head);
    
    display(head);
    
    freeList(&head);
    printf("Linked list memory freed.\n");
    
    return 0;
}