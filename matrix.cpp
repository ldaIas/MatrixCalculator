#include <vector>
#include<stdio.h>
#include "matrix.h"
using namespace std;

/**
 * Creates an empty matrix object
 */
Matrix::Matrix(){
    this->size_m = 0;
    this->size_n = 0;
}

/**
 * Matrix() - create an m x n matrix, filled with null values
 * 
 * @m:          Number of rows in the matrix (m)
 * 
 * @n:          Number of columns in the matrix (n)
 * 
 * Return: A newly created m x n matrix object
 */
Matrix::Matrix(int m, int n){
    this->size_m = m;
    this->size_n = n;
    initialize_matrix();
}

/**
 * initialize_matrix() - initialize all the values in the matrix to null
 */
void Matrix::initialize_matrix(){
    
    for(int m = 0; m < this->size_m; m++){
        vector<int*> row_vec(this->size_n, NULL);
        matrix.push_back(row_vec);
    }
}


/**
 * insert_vector() - insert a new vector into the matrix
 * 
 * @new_vec:    The new vector to be inserted. Must have same number of entries
 *              as the rows in the matrix.
 * 
 * Return: 0 if vector insertion was succesful, -1 if not.
 */
int Matrix::insert_vector(vector<double> new_vec){
    return 0;
}

/**
 * change_value() - change the value of a specific entry
 * 
 * @i:          Row of value to change
 * @j:          Column of value to change
 * @val:        Value to change to
 * 
 * Return: 0 if value change was successful, -1 if not.
 */
int Matrix::change_value(int i, int j, int *val){
    i -= 1;
    j -= 1;
    if(i >= this->size_m || i < 0 || j >= this->size_n || j < 0){
        return -1;
    }
    matrix.at(i).at(j) = val;
    return 0;
}
/**
 * print_matrix() - print the current matrix. [] will be printed for null values
 */
void Matrix::print_matrix(){
    for(int m = 0; m < this->size_m; m++){
        printf("|");
        for(int n = 0; n < this->size_n; n++){
            if(matrix.at(m).at(n) == NULL){
                printf(" [] ");
                continue;
            }
            printf(" %d ", *matrix.at(m).at(n));

        }
        printf("|\n");
    }
}
    