#include <vector>
#include<stdio.h>
#include "matrix.h"
using namespace std;


Matrix::Matrix(){
    this->size_m = 0;
    this->size_n = 0;
    vector<double*> row_vec = {};
    matrix.push_back(row_vec);
}


Matrix::Matrix(int m, int n){
    this->size_m = m;
    this->size_n = n;
    initialize_matrix();
}


void Matrix::initialize_matrix(){
    
    for(int m = 0; m < this->size_m; m++){
        vector<double*> row_vec(this->size_n, NULL);
        matrix.push_back(row_vec);
    }
}


int Matrix::change_value(int row, int col, double *val){
    row -= 1;
    col -= 1;
    if(row >= this->size_m || row < 0 || col >= this->size_n || col < 0){
        return -1;
    }
    matrix.at(row).at(col) = val;
    return 0;
}

void Matrix::print_matrix(){
    if(this->size_m == 0 && this->size_n == 0){
        printf("| |\n");
    }
    for(int m = 0; m < this->size_m; m++){
        printf("|");
        for(int n = 0; n < this->size_n; n++){
            if(matrix.at(m).at(n) == NULL){
                printf(" [] ");
                continue;
            }
            printf(" %2.f ", *matrix.at(m).at(n));

        }
        printf("|\n");
    }
    printf("\n");
}
    

/** 
 * Getters
 */

int *Matrix::get_matrix_size(){
   int size_arr[2];
   size_arr[0] = this->size_m;
   size_arr[1] = this->size_n;

   int *arr_pointer = size_arr;
   return arr_pointer;
}

vector<vector<double*>> Matrix::get_matrix(){
    return this->matrix;
}