#pragma once

#include <cstddef>

void RunProblem3();

struct Node {
    Node(char d) : next(nullptr), data(d) {}
    Node* next;
    char data;
};

Node* generateList(size_t n);
void printList(Node* root);
Node* findMid(Node* root);
void destroyList(Node* root);
