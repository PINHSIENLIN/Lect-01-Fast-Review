// Write a combination function

#include<iostream>
using namespace std;

int combination(int n, int m){

    if (n == m || m == 0)
        return 1;
    else if (n < m)
        cout << "input error" << endl;
    else {
        int numerator = 1;
        int denominator = 1;
        int denominator1 = 1;
        for (int i = 1; i <= n; i++)
        {
            numerator *= i;       
        }
    
        for (int i = 1; i <= m; i++)
        {
            denominator *= i;       
        }

        for (int i = 1; i <= n-m; i++)
        {
            denominator1 *= i;       
        }

        return numerator/(denominator1*denominator);
    }
   
}

int main(){
    
    int x, y;
    
    cin >> x >> y;
    
    cout << combination(x,y);

    return 0;
// }
// https://stackoverflow.com/questions/60805408/how-to-write-combinations-recursively-in-c
// #include<iostream>
// using namespace std;

// float comb(int n,int r){ 
//     if(r!=0)
//     {
//         return (n-r+1)*comb(n,r-1)/r;
//     }
//     else
//     {
//         return 1;
//     }      
// }

// int main(){
//     int n,r;
//     float com;
//     cout<<"Enter the values of n and r in nCr \n";
//     cin>>n>>r;
//     if(n-r>=r)
//     {
//         com = comb(n,r);
//     }
//     else
//     {
//         com = comb(n,n-r);
//     }

//     cout<<"The number of combinations is "<<com<<"\n";    
// }