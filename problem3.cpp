#include "problem3.h"
#include <iostream>

// Given the following Linked List, implement the missing methods
//   midFind
//   destroyList
//
// Be mindful of O(n) implications

void RunProblem3() {
    std::cout << "Problem 3 😳\n\n";
    
    Node* root = generateList(10);
    printList(root);
    Node* result = findMid(root);
    
    std::cout << "Hello " << result->data << std::endl;
    destroyList(root);
}

Node* generateList(size_t n) {
    if (n == 0) {
        return nullptr;
    }
    Node* root = new Node('a');
    Node* current = root;
    for (size_t i = 1; i < n; ++i) {
        current->next = new Node(root->data + i);
        current = current->next;
    }
    return root;
}

void printList(Node* root) {
    for (Node* current = root; current;) { 
        std::cout << current->data << ", ";
        current = current->next; 
    }
    std::cout << std::endl;
}

Node* findMid(Node* root) {
    // Implement
    return root;
}

void destroyList(Node* root) {
    // Implement
}
