#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

typedef struct node{
    char* data;
    struct node * next;
} Node;

void PUSH(char* item, Node** head);
void POP(Node** head);
char* TOP(Node* head);
void makeNULL(Node** head);
bool EMPTY(Node* head);
bool FULL(Node* newNode);
int stackSize(Node* head);
void display(Node* head);
void addKitchenware(char* item, Node** head);
void washKitchenware(Node** head);
void topKitchen(char* top, Node* stack);
void washAll(Node** head);

// Main Function
int main(){
    int choice;
    char item[64];
    char top[64];

    // Stack
    Node* stack = NULL;

    do{
        printf("\nKitchenware Washing Machine\n");
        printf("[1] Add Kitchenware\n[2] Wash Kitchenware\n[3] Top Kitchenware\n[4] Wash All\n[5] Display Stack\n[0] Exit\n\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("\nEnter kitchenware to be washed: ");
                scanf(" %[^\n]", item);
                addKitchenware(item, &stack);
                break;
            
            case 2:
                washKitchenware(&stack);
                break;

            case 3:
                printf("\n");
                topKitchen(top, stack);
                printf("\n");
                break;
            
            case 4: // Wash All
                washAll(&stack);
                break;

            case 5: // Display Stack
                display(stack);
                break;
            case 0:
                printf("\nThe washing machine process has been terminated!\n\n");
                break;

            default: printf("\nInvalid Input!\n");
        }   
    } while(choice != 0);

    return 0;
}

/*
    STACK IMPLEMENTATION
    OPERATIONS FOR THE STACK
*/
void PUSH(char* item, Node** head){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = (char*)malloc(strlen(item)+1);

    strcpy(newNode->data, item);
    newNode->next = *head;
    *head = newNode;

    if(FULL(newNode)){
        printf("\nStack is FULL!\n");
    }
}
// Remove the current head of the Stack
void POP(Node** head){
    Node* temp;
    if(*head == NULL){
        printf("Stack is empty!\n");
    } else {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}
// Returns the top element of the Stack
char* TOP(Node* head){
    return head->data;
}
// Makes the Stack empty
void makeNULL(Node** head){
    while(*head != NULL){
        POP(head);
    }
}
// Returns True (1) if Stack is empty, otherwise, False(0)
bool EMPTY(Node* head){
    if (head == NULL){
        return true;
    }
    return false;
}
// Returns True (1) if Stack is full, otherwise, False (0)
bool FULL(Node* newNode){
    if (newNode == NULL){
        return true;
    }
    return false;
}

/*
    Miscellaneous Functions Needed
    StackSize : Determine the total size of stack, for the purpose of checking and debugging
    Display: Display the contents of the stack for the purpose of checking and debugging.
*/
int stackSize(Node* head){
    int count = 0;
    Node* current = head;

    // Traverse Nodes
    while(current != NULL){
        count++;
        current = current->next;
    }
    return count;
}
void display(Node* head){
    Node* current;
    current = head;
    if(current != NULL){
        printf("\nStack: ");
        do{
            printf("%s -> ", current->data);
            current = current->next;
        } while (current != NULL);
        printf("\n");
    } else {
        printf("\nThe stack is empty!\n");
    }
}
/*
    STACK APPLICATION
    Kitchenware Washing Machine
*/
void addKitchenware(char* item, Node** head){
    PUSH(item, head);
}
void washKitchenware(Node** head){
    if(*head == NULL){
        printf("\nThe STACK is EMPTY. No kitchenware to wash.\n");
        return;
    }
    char item[64];
    strcpy(item, TOP(*head));
    printf("\n%s is being washed.\n", item);
    POP(head);
}
void topKitchen(char* top, Node* stack){
    if(stack == NULL){
        printf("\nThe STACK is EMPTY. No kitchenware to wash.\n");
    } else {
        strcpy(top, TOP(stack));
        printf("%s is next to be washed.", top);
    }
}
void washAll(Node** head){
    if(*head == NULL){
        printf("\nThe STACK is EMPTY. No kitchenware to wash.\n");
        return;
    }
    makeNULL(head);
    printf("\nAll kitchenware has been washed.\n");
}

