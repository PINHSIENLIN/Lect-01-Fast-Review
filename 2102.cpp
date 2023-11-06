// There are two matrices a and b as shown below. 
// Please output the result c of their multiplication according to the format.
// Matrix A    
// [1,2,3,    
//  4,5,6,
//  7,8,9]

//  Matrix B   
// [2,4,6,    
//  8,10,12,
//  14,16,18]

#include<iostream>
#include <stdio.h>
#define R 3
#define C 3
using namespace std;

int main(){
    int a[R][C] = {{1,2,3},
                   {4,5,6},
                   {7,8,9}};

    int b[R][C] = {{2,4,6},
                   {8,10,12},
                   {14,16,18}};
    // Initialization
    int c[R][C] = {0};
    
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            for (int k = 0; k < R; k++)
                c[i][j] += a[i][k] * b[k][j];
      
        

    
    // Print C matrix
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%-5d",c[i][j]);
        }
        cout << endl;
    }

    return 0;
}