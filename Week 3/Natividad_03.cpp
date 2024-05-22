/*  Name: Natividad, Deniel Dave C.
    Section: CMSC 28
    Date: April 07, 2024
    Program Description: A simple program that simulates a checkout counter in a grocery store. This program uses linked list implementation for a queue data structure.
*/
// Libraries
#include <iostream>
#include <string>

// Structure for the node, includes; name of the customer, amount to be paid, and a pointer to the next node.
struct Node {
    std::string name;        
    float amount;
    Node* next;
};
// Structure for the queue, includes; a pointer to the front and rear of the queue.
struct Queue {
    Node* front;
    Node* rear;
};
// Initializes front and rear of the queue to NULL.
Queue* init() {
    Queue* q = new Queue;
    q->front = q->rear = NULL;
    return q;
}
// Checks if the queue is empty. Returns true if the front of the queue is NULL.
bool empty(Queue* q) {
    return (q->front == NULL);
}
// Returns the front of the queue. Front is essentially the head of the queue.
Node* front(Queue* q) {
    if (empty(q)) {
        std::cout << "Queue is empty\n";
        return NULL;
    }
    return q->front;
}
// Enqueues a new node to the queue. The new node is added to the rear of the queue.
void enqueue(Queue* q, std::string name, float amount) {
    // Create a new node, populated data then set next to NULL.
    Node* temp = new Node;
    temp->name = name;
    temp->amount = amount;
    temp->next = NULL;
    // If the rear of the queue is NULL, set the front and rear to the new node.
    if (q->rear == NULL) {
        q->front = q->rear = temp;
        return;
    }
    // Otherwise, set the next of the rear to the new node and set the rear to the new node.
    q->rear->next = temp;
    q->rear = temp;
}
// Dequeues the front of the queue. The front of the queue is removed.
void dequeue(Queue* q) {
    // If the queue is empty, print a message and return.
    if (empty(q)) {
        std::cout << "Queue is empty\n";
        return;
    }
    // Create a temporary node, set it to the front of the queue, set the new front to the next node of the front.
    Node* temp = q->front;
    q->front = q->front->next;
    // If the front is NULL, set the rear to NULL. This happens when the queue only has one node and it is dequeued.
    if (q->front == NULL)
        q->rear = NULL;
    // Delete the temporary node. This is to free up the memory used by the node.
    delete temp;
}

int main() {        
    // Initialize the queue and choice variable.                              
    Queue* q = init(); 
    int choice;            

    do {
        // Display the menu and get the user's choice.
        std::cout << "\nKCC Checkout Counter 0: \n";
        std::cout << "\n[1] Fall in Line\n[2] Serve Costumer\n[3] Next Costumer\n[4] Closing Time\n[0] Exit\n\nEnter your choice: "; 
        // Input validation for int choice/variables. Can only work if all the user inputs is a char, else the input validation doesnt work.
        while (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Invalid input. Please enter a valid choice: ";
        }
        std::cout << "\n";

        switch (choice) { 
            case 1: { // Fall in line
                // Get the name and amount to be paid from the user.
                std::string name;
                float amount;

                std::cout << "Enter the customer's Lastname: ";
                std::cin >> name;

                std::cout << "Enter the total amount to be paid (PHP): ";
                while (!(std::cin >> amount)) {
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                    std::cout << "Invalid input. Please enter a number: ";
                }
                // Enqueue the customer to the queue.
                enqueue(q, name, amount);
                break;
            }
            case 2: // Serve Costumer
                // If the queue is empty, print a message. Otherwise, serve the front of the queue.
                if (empty(q)) {
                    std::cout << "The QUEUE is EMPTY. No orders to serve.\n";
                } else {
                    std::cout << "Now Serving " << front(q)->name << " with total amount payable of PHP " << front(q)->amount << ".\n";
                    dequeue(q); // Dequeue the front of the queue as it is already served.
                }
                break;
            case 3: // Next Costumer
                // If the queue is empty or there is no next order to serve, print a message. Otherwise, print the next order.
                if (empty(q) || q->front->next == NULL) {
                    std::cout << "The QUEUE is EMPTY or there is no next order to serve.\n";
                } else {
                    std::cout << "Next Order: For " << q->front->next->name << " with total amount payable of PHP " << q->front->next->amount << ".\n";
                }  
                break;
            case 4: // Serve all costumer
                // Serve all the customers in the queue until the queue is empty or no constumers left.
                while (!empty(q)) {
                    std::cout << "Now Serving " << front(q)->name << " with total amount payable of PHP " << front(q)->amount << ".\n";
                    dequeue(q);
                }
                std::cout << "The QUEUE is EMPTY. No costumer/s to serve.\n";
                break;
            case 0: // Exit the program
                break;
            default: // If the user entered an invalid choice
                std::cout << "Invalid choice\n";
        }
    } while (choice != 0); // Continue the loop until the user enters 0 to exit the program.

    return 0;
}