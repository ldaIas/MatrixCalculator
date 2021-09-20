
#ifndef MATRIX_H
#define MATRIX_H
#include <vector>
using namespace std;
class Matrix {

    

private:
    // Variables
    int size_m;
    int size_n;
    vector<vector<double*>> matrix;

    // Methods

    /**
     * initialize_matrix() - initialize all the values in the matrix to null
     */
    void initialize_matrix();


public:

    /**
     * Creates an empty matrix object
     */
    Matrix();

    /**
     * Matrix() - create an m x n matrix, filled with 0 values
     * 
     * @m:          Number of rows in the matrix (m)
     * 
     * @n:          Number of columns in the matrix (n)
     * 
     * Return: A newly created m x n matrix object
     */
    Matrix(int, int);

    /**
     * change_value() - change the value of a specific entry
     * 
     * @i:          Row of value to change
     * @j:          Column of value to change
     * @val:        Value to change to
     * 
     * Return: 0 if value change was successful, -1 if not.
     */
    int change_value(int, int, double*);

    /**
     * print_matrix() - print the current matrix. [] will be printed for null values
     */
    void print_matrix();

    // Getters
    /**
     * get_matrix_size() - get the size of the matrix
     * 
     * Return: An array of two elements formatted [m, n]
     */
    int *get_matrix_size();

    /**
     * get_matrix() - get the vectors representing the matrix
     * 
     * Return: A vector<vector<double*>> representing the matrix
     */
    vector<vector<double*>> get_matrix();
    

};

#endif