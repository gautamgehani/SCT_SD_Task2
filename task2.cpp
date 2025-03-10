//a program that generates a random number and challenges user to guess it.
// The program should tell the user if their guess is too high, too low, or correct.
// The program should also keep track of the number of guesses the user makes.
// The program should prompt the user to play again if they want to.
// The program should prompt the user to guess and compare the guess with the generated number

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // seed the random number generator
    int number = rand() % 100 + 1; // random number between 1 and 100
    int guess, tries = 0;
    cout << "Guess My Number Game\n\n";
    cout << "I'm thinking of a number between 1 and 100.\n";
    cout << "You have to guess it.\n\n";
    
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;
        
        if (guess > number) {
            cout << "Too high!\n\n";
        } else if (guess < number) {
            cout << "Too low!\n\n";
        } else {
            cout << "\nCorrect! You got it in " << tries << " guesses!\n";
            break;
        }
    }
    return 0;
}
    
