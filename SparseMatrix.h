#ifndef SPARSE_MATRIX_H
#define SPARSE_MATRIX_H

struct Node {
    int row;
    int col;
    int value;
    Node* next;
};

class SparseMatrix {
private:
    Node* head;
public:
    SparseMatrix();
    void insert(int row, int col, int value);
    void display();
    // Additional methods as needed
};

#endif
