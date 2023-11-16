// Write a combination function

#include<iostream>
using namespace std;

int combination(int n, int m){

    if (n == m || m == 0) 
        return 1;
    else 
        return combination(n-1,m) + combination(n-1,m-1);  
}

int main(){
    
    int x, y;
    
    cin >> x >> y;
    
    if (y > x)
        cout << "input error" << endl ;
    else 
        cout << combination(x,y);
    
    return 0;
}
