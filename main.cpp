#include "SparseMatrix.h"
#include <iostream>

int main() {
    SparseMatrix sm;
    sm.insert(0, 1, 5);
    sm.insert(1, 2, 10);
    sm.insert(2, 3, 15);
    sm.display();
    return 0;
}
