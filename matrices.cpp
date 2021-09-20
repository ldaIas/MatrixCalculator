#include <vector>
#include <stdio.h>
#include "matrix.h"
using namespace std;

int main(){

    Matrix A(5, 6);
    A.print_matrix();
    printf("\n");
    double nv = 5.0;
    double* new_val = &nv;
    A.change_value(2, 3, new_val);
    A.print_matrix();
    printf("\n");
    double* a = new double(1);
    double* b = new double(2);
    double* c = new double(3);
    double* d = new double(4);
    double* e = new double(5);
    vector<double*> ins = {a, b, c, d, e};
    A.insert_vector(1, ins);
    A.print_matrix();
    return 0;
}