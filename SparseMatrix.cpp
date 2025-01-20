#include "SparseMatrix.h"
#include <iostream>

SparseMatrix::SparseMatrix() : head(nullptr) {}

void SparseMatrix::insert(int row, int col, int value) {
    Node* newNode = new Node{row, col, value, nullptr};
    if (!head || (head->row > row || (head->row == row && head->col > col))) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next && (current->next->row < row || (current->next->row == row && current->next->col < col))) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void SparseMatrix::display() {
    Node* current = head;
    while (current) {
        std::cout << "Row: " << current->row << ", Col: " << current->col << ", Value: " << current->value << std::endl;
        current = current->next;
    }
}