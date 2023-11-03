// Let the system randomly generate a number between 1 and 5
// The user enters a number and guesses what the number is.
// If the guess is correct, "guessed correctly" will be output.
// If the guess is wrong, the output will be "Guessed Wrong".

// But it is a pity that the system cannot correct random number questions
// Therefore, this random number is manually entered by the user.

#include<iostream>
using namespace std;

int main(){
    int ans;
    int guess;
    cin >> ans;
    cin >> guess;

    if (ans == guess){
        cout << "bingo answer is " << ans << endl;
    } else {
        cout << "wrong answer, answer is " << ans << endl;
    }
    return 0;

}