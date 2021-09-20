#include <vector>
#include <stdio.h>
#include "matrix.h"
using namespace std;

int main(){

    Matrix A(5, 6);
    A.print_matrix();
    printf("\n");
    int* new_val = new int(5);
    A.change_value(2, 3, new_val);
    A.print_matrix();
    return 0;
}