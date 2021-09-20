#include <vector>
#include <stdio.h>
#include "matrix.h"
#include <string>
using namespace std;

// Print a failure message
void print_fail(string msg){
    printf("\033[0;31m%s\033[0m\n", msg.c_str());
}

// Print a success message
void print_success(string msg){
    printf("\033[0;32m%s\033[0m\n", msg.c_str());
}

// Print the current test case
void print_test(string msg){
    printf("\033[0;33m%s\033[0m\n", msg.c_str());
}

// Test 1: Create an empty matrix
int test_empty_matrix(){
    print_test("Test 1: Create empty matrix");
    Matrix A;
    int *size_of_array = A.get_matrix_size();

    if(size_of_array[0] != 0 || size_of_array[1] != 0){
        string msg = "Expected: [0][0]\nActual: [" + to_string(size_of_array[0]) + "][" + to_string(size_of_array[1]) + "]";
        print_fail(msg);

        return -1;
    }
    string msg = "Expected: [0][0]\nActual: [" + to_string(size_of_array[0]) + "][" + to_string(size_of_array[1]) + "]";
    print_success(msg);
    printf("Matrix:\n");
    A.print_matrix();
    return 0;
}

//Test 2: Create a sized empty matrix
int test_empty_sized_matrix() {
    print_test("Test 2: Create a sized but empty matrix");
    Matrix A(3,4);
    int *size_of_array = A.get_matrix_size();

    if(size_of_array[0] != 3 || size_of_array[1] != 4){
        string msg = "Expected: [3][4]\nActual: [" + to_string(size_of_array[0]) + "][" + to_string(size_of_array[1]) + "]";
        print_fail(msg);
        A.print_matrix();
        return -1;
    }
    string msg = "Expected: [3][4]\nActual: [" + to_string(size_of_array[0]) + "][" + to_string(size_of_array[1]) + "]";
    print_success(msg);
    printf("Matrix:\n");
    A.print_matrix();    
    return 0;
}

// Test 3: Insert a row into an already created sized empty matrix in column 1
 int test_val_change(){
     print_test("Test 3: Insert a row into empty but sized matrix");
     Matrix A(3,4);

     double row1 = 1;
     double row2 = 2;
     double row3 = 3;

     if(A.change_value(1, 1, &row1) != 0) print_fail("Value change 1 failed");
     if(A.change_value(2, 1, &row2) != 0) print_fail("Value change 2 failed");
     if(A.change_value(3, 1, &row3) != 0) print_fail("Value change 3 failed");
     vector<vector<double*>> mat = A.get_matrix();

     if(*mat.at(0).at(0) == 1 && *mat.at(1).at(0) == 2 && *mat.at(2).at(0) == 3){
         print_success("Values changed succesfully");
         A.print_matrix();
         return 0;
     }
     else{
         print_fail("Values not changed successfully");
         A.print_matrix();
         return -1;
     }

 }

int main(){
    // Test empty matrix creation
    if(test_empty_matrix() != 0){
        print_fail("Test 1 failed\n");
    }
    else{
        print_success("Test 1 passed\n");
    }

    // Test sized matrix creation
    if(test_empty_sized_matrix() != 0){
        print_fail("Test 2 failed\n");
    }
    else{
        print_success("Test 2 passed\n");
    }

    // Test vector insertion
    if(test_val_change() != 0){
        print_fail("Test 3 failed\n");
    }
    else{
        print_success("Test 3 passed\n");
    }
    
    return 0;
}