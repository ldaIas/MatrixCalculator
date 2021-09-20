
#ifndef MATRIX_H
#define MATRIX_H
#include <vector>
using namespace std;
class Matrix {

    

private:
    // Variables
    int size_m;
    int size_n;
    vector<vector<int*>> matrix;

    // Methods
    void initialize_matrix();


public:
    Matrix();
    Matrix(int, int);

    int insert_vector(vector<double>);

    int change_value(int, int, int*);

    void print_matrix();
    

};

#endif