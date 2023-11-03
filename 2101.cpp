// Please use the Comprehensive Income Tax Quick Calculation Test Table 
// below to find out how to print out the tax rate, tax amount, 
// progressive difference and the tax payable this year 
// after the user inputs the net comprehensive income.

// net_income *        tax_rate - progressive_difference
// 0 ~ 370000          0.06        0
// 370000 ~ 990000     0.13        25900
// 990000 ~ 1980000    0.21        105100
// 1980000 ~ 3720000   0.30        283300
// 3720000             0.4         655300

#include<iostream>
using namespace std;

int main(){
    int income;
    cin >> income ;
    
    if (income <= 370000){
        cout << "income " << income << endl;
        cout << "tax rate 6%" << endl;
        cout << "tax "<< income*0.06 << endl;
        cout << "discount " << 0 << endl;
        cout << "taxpay " << income*0.06 - 0 << endl;
    } else if (income <= 990000) {
        cout << "income " << income << endl;
        cout << "tax rate 13%" << endl;
        cout << "tax "<< income*0.13 << endl;
        cout << "discount " << 25900 << endl;
        cout << "taxpay " << income*0.13 - 25900 << endl;
    } else if (income <= 1980000) {
        cout << "income " << income << endl;
        cout << "tax rate 21%" << endl;
        cout << "tax "<< income*0.21 << endl;
        cout << "discount " << 105100 << endl;
        cout << "taxpay " << income*0.21 - 105100 << endl;
    } else if (income <= 3720000) {
        cout << "income " << income << endl;
        cout << "tax rate 30%" << endl;
        cout << "tax "<< income*0.3 << endl;
        cout << "discount " << 283300 << endl;
        cout << "taxpay " << income*0.3 - 283300 << endl;
    } else {
        cout << "income " << income << endl;
        cout << "tax rate 40%" << endl;
        cout << "tax "<< income*0.4 << endl;
        cout << "discount " << 655300 << endl;
        cout << "taxpay " << income*0.4 - 655300 << endl;
    }

    return 0;

    // Hello World 2323232
}