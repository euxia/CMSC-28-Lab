/* Filename: Natividad_Magpusao_01.cpp
Proponent: Natividad, Deniel Dave 
         : Magpusao, Yldiever John
Date: March 17, 2024
Purpose: To be able to implement the list ADT using linked list. */

// Include the necessary libraries
#include <iostream>
#include <fstream>
#include <utility>
#include <limits>


// struct for the Node
struct Node {
    int data;
    Node* next;
};
// function to insert a node
Node* insert(Node* head, int data, int position) {
    Node* newNode = new Node();         // Dynamically create a new node
    newNode->data = data;               // Assign the data to the new node
    newNode->next = NULL;               // Set the next node to NULL

    if (position == 0) {                // If the position is or start of the list, replace the head with the new node
        newNode->next = head;
        head = newNode;
    } else {
        Node* temp = head;
        for (int i = 0; i < position - 1 && temp != NULL; i++) {        // If the position is not at the start of the list, traverse the list until the position is found
            temp = temp->next;
        }
        if (temp != NULL) {                                             // If the position is found, insert the new node
            newNode->next = temp->next;             // Insert the new node at the specified position
            temp->next = newNode;                   // Set the next node of the previous node to the new node
        } else {                                                        // If the position is out of range, add the new node at the end of the list
            std::cout << "\nPosition out of range. Adding at the end of the list.\n";
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    return head;
}
// function to display the menu for the user to choose where to add the item
int insertMenu() {
    int choice, position;
    std::cout << "\nPlease enter the item to be added\n\nWhere to add the item?\n\n[1] Start of the list\n[2] End of the list\n[3] Specific position\n[4] Cancel\n\nEnter your choice: ";
    std::cin >> choice;
    if (choice == 1) {
        position = 0;
    } else if (choice == 2) {
        position = -1;
    } else if (choice == 3) {
        std::cout << "Enter the position: ";
        std::cin >> position;
        while (std::cin.fail()) {                                           
            std::cin.clear();
            std::cin.ignore(10000, '\n');                                
            std::cout << "Invalid input. \nPlease enter a number as the position: ";        
            std::cin >> position;
        }
    } else if (choice == 4){
        std::cout << "\nCancelled\n";
        return -2;
    } else {
        std::cout << "\nInvalid choice\n";
        return -2;
    }
    return position;
}

// function to get the end position of the list
int endposition(Node* head) {
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;  
    }
    return count;
}

// function to delete a node and also return the position of the deleted node
std::pair<Node*, int> deleteNode(Node* head, int data) {
    int position = 0;                   // Initialize the position to 0
    if (head == NULL) { 
        std::cout << "\nThe list is empty\n";
        return {NULL, -1};
    }    // If the list is empty, return NULL and -1
    if (head->data == data) {               // If the data is found at the start of the list, delete the head and return the next node as the new head
        Node* temp = head->next;        
        delete head;
        return {temp, position};
    }
    Node* temp = head;                      // Traverse the list until the data is found
    while (temp->next != NULL && temp->next->data != data) {
        temp = temp->next;
        position++;
    }                                       // If the data is found, delete the node and return the new head and the position of the deleted node
    if (temp->next != NULL) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
        return {head, position + 1};
    }
    else {
        std::cout << "\nThe list contain no such element\n";
        return {head, -1};
    }
}
// function to save the list to a file
void saveList(Node* head) {
    std::ofstream file("list.txt");         // Open the file for writing if the file does not exist, it will create a new file
    Node* temp = head;
    while (temp != NULL) {                  // Traverse the list and write the data to the file
        file << temp->data << "\n";
        temp = temp->next;
    }
    file.close();                           // Close the file
}
// Create a function to load the list from a file
Node* loadList() {                   
    Node* head = NULL;                      // Initialize the head to NULL
    int data;                               // Create a variable to store the data

    std::ifstream file("list.txt");         // Open the file for reading, if the file does not exist, it will return NULL
    while (file >> data) {
        // Assuming we want to append data at the end of the list.txt
        Node* temp = head;
        int count = 0;
        while (temp != NULL) {              // Traverse the list to get the end position
            count++;
            temp = temp->next;
        }
        head = insert(head, data, count);   // Insert the data at the end of the list
    }
    file.close();

    return head;                            // Return the head of the list
}

// function to display the list
void displayList(Node* head) {              
    std::cout << "\nElements in the linked list are: ";   // Display the elements in the list
    Node* temp = head;
    int position = 0;
    while (temp != NULL) {                                // Traverse the list and display the data stop when the next node is NULL
        std::cout << "\nPosition " << position << ": " << temp->data;
        position++;                                         // Display the data
        temp = temp->next;                                // Move to the next node
    }
    std::cout << "\n";
}
// function to delete the list
void deleteList(Node*& head) {                            
    Node* current = head;
    Node* next;

    while (current != NULL) {                               // Traverse the list and delete the nodes stop when the current node is NULL
        next = current->next;                               // Store the next node
        delete current;                                     // Delete the current node
        current = next;                                     // Move to the next node
    }

    head = NULL;                                            // Set the head to NULL
}

// main function
int main() {
    Node* head = loadList();                                // Load the list from the file
    int choice, data, position;                             // Create variables for the choice, data, and position

    do {
        std::cout << "\nList MENU\n\n[1] Add item\n[2] Delete item\n[3] Display list\n[4] Delete List\n[5] Exit\n\nEnter your choice: "; 
        std::cin >> choice;

        switch (choice) { // Create a switch case for the menu
            case 1:
            // Add some input validation that will only allow the user to input a number
            // Make a function if the position is out of bounds, add it at the end of the list, TLDR: DONE
                position = insertMenu();                                                // Display the menu for the user to choose where to add the item
                if (position != -2) {                                                   // If the user did not cancel the operation
                    std::cout << "Enter the item to add: ";                             
                    std::cin >> data;
                    while (std::cin.fail()) {                                           // Add input validation that will only allow the user to input a number
                        std::cin.clear();
                        std::cin.ignore(10000, '\n');                                   // Clear the input buffer
                        std::cout << "Invalid input. \nPlease enter a number: ";        // Ask the user to enter a number
                        std::cin >> data;
                    }
                    if (position == -1) {                                               // If the position is at the end of the list
                        position = endposition(head);
                    }
                    head = insert(head, data, position);                                // Insert the data to the list at the specified position then assign the new head to the head
                }
                break;
            case 2: { // Delete an item
                // Make a function if the item is not in the list 
                std::cout << "Enter the item to delete: ";
                std::cin >> data;
                while (std::cin.fail()) {                                               // Add input validation that will only allow the user to input a number
                    std::cin.clear();
                    std::cin.ignore(10000, '\n');                                       // Clear the input buffer
                    std::cout << "Invalid input. \nPlease enter a number: ";            // Ask the user to enter a number
                    std::cin >> data;
                }
                std::pair<Node*, int> result = deleteNode(head, data);                  // Delete the node and get the new head and the position of the deleted node
                head = result.first;
                int deletedPosition = result.second;
                if (deletedPosition != -1) {
                    std::cout << "\nThe element " << data << ", which is at position " << deletedPosition << " has been deleted.\n";
                }
                break;
            }
            case 3: // Display the list
                displayList(head);
                break;
            case 4: // Delete the list
                deleteList(head);
                std::cout << "The list has been emptied!\n";
                break;
            case 5: // Exit the program
                saveList(head);
                break;
            default: // If the user entered an invalid choice
                std::cout << "Invalid choice\n";
        }
    } while (choice != 5);

    return 0;
}