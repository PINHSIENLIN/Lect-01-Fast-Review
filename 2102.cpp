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
using namespace std;

int main(){
    int a[3][3] = {{1,2,3},
                   {4,5,6},
                   {7,8,9}};

    int b[3][3] = {{2,4,6},
                   {8,10,12},
                   {14,16,18}};

    int c[3][3];
    
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
           c[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j];
        }
        
    }
    
    // Print C matrix
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%-5d",c[i][j]);
        }
        cout << endl;
    }

    return 0;
}